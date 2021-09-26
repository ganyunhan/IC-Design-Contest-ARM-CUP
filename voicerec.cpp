#include "voicerec.h"
#include "constArrays.h"
#include "neuralNetworkSynth.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include <ap_int.h>

/****************************************************
 * GLOBAL VARIABLES
*****************************************************/
float result[NUMRESULTS][(NUM_BANKS/2)+1];

float c[2*NP];

float spec[NP];
float e[NUM_BANKS];
int begins[80];
int ends[80];

/****************************************************
 * Math and Signal Processing Helper Functions
*****************************************************/

/****************************************************
Fast Logarithm function from:
http://www.machinedlearnings.com/2011/06/fast-approximate-logarithm-exponential.html
*****************************************************/
static inline float 
fastlog2 (float x)
{
  union { float f; uint32_t i; } vx = { x };
  union { uint32_t i; float f; } mx = { (vx.i & 0x007FFFFF) | 0x3f000000 };
  float y = vx.i;
  y *= 1.1920928955078125e-7f;
  return y - 124.22551499f
           - 1.498030302f * mx.f 
           - 1.72587999f / (0.3520887068f + mx.f);
}

static inline float
fastlog (float x)
{
  return 0.69314718f * fastlog2 (x);
}

/****************************************************
1D DCT II from:
https://unix4lyfe.org/dct-1d/
****************************************************/

void dct_ii(int N, float *x, float *X) {
  for (int k = 0; k < (N/2)+1 ; ++k) {
    float sum = 0.;
    float s = (k == 0) ? 0.707106781186548 : 1;
    for (int n = 0; n < N; ++n) {
      sum += s * x[n] * dctMatrix[k][n];
    }
    X[k] = sum * 0.277350098112615;
  }
}

/* COPYRIGHT
 fft - Takes the FFT of a data (time domain) 
 file, and outputs to file the complex FFT data.
 
 Copyright (C) 2003, 2004, 2005 Exstrom 
 Laboratories LLC

 FFT - calculates the discrete fourier transform of 
 an array of float precision complex numbers using 
 the FFT algorithm.

 c = pointer to an array of size 2*N that contains 
 the real and imaginary parts of the complex numbers.
 The even numbered indices contain the real parts and
 the odd numbered indices contain the imaginary parts

 c[2*k] = real part of kth data point.
 c[2*k+1] = imaginary part of kth data point.
*/

void FFT( float *c )
{
  int n, n2, nb, j, k, i0, i1, q;
  float wr, wi, wrk, wik;
  float d, dr, di, d0r, d0i, d1r, d1i;
  float *cp;
  j = 0;
  n2 = NP / 2;
region:{
  for( k = 0; k < NP; ++k )
  {
    if( k < j )
    {
      i0 = k << 1;
      i1 = j << 1;
      dr = c[i0];
      di = c[i0+1];
      c[i0] = c[i1];
      c[i0+1] = c[i1+1];
      c[i1] = dr;
      c[i1+1] = di;
    }
    n = NP >> 1;
    for (q=0; q < 8; ++q) {
#pragma HLS PIPELINE
      if ( (j >= n) && (n >= 2) ) {
        j -= n;
        n = n >> 1;
      }
    }
    j += n;
  }

  for( n = 2; n <= NP; n = n << 1 )
  {

    wr = cosVec[n-1];
    wi = sinVec[n-1];
    cp = c;
    nb = NP / n;
    n2 = n >> 1;
    for( j = 0; j < 128; ++j )
    {
      if (j < nb) {
        wrk = 1.0;
        wik = 0.0;
        for( k = 0; k < (NP >> 1); ++k )
        {
#pragma HLS PIPELINE
          if (k < n2) {
            i0 = k << 1;
            i1 = i0 + n;
            d0r = cp[i0];
            d0i = cp[i0+1];
            d1r = cp[i1];
            d1i = cp[i1+1];
            dr = wrk * d1r - wik * d1i;
            di = wrk * d1i + wik * d1r;
            cp[i0] = d0r + dr;
            cp[i0+1] = d0i + di;
            cp[i1] = d0r - dr;
            cp[i1+1] = d0i - di;
            d = wrk;
            wrk = wr * wrk - wi * wik;
            wik = wr * wik + wi * d;
          }
        }
        cp += n << 1;
      }
    }
  }
}
}


/****************************************************
 * HELPER FUNCTIONS
*****************************************************/

/****************************************************
Processor for a 256-sample (32ms) chunk of sound to 
generate fingerprint.
*****************************************************/

void processChunk( int sp, float *ret, float *inputSound)
{

  int i = 0;

  for( i = 0; i < NP; ++i )
  {
    c[2*i] = inputSound[sp+i];
    c[2*i+1] = 0.0;
    if (i < NUM_BANKS) e[i] = 0; 
  }

  FFT( c );

region:{
#pragma HLS UNROLL
  for( i = 0; i < NP; ++i )
  {
    spec[i] = (c[2*i]*c[2*i] + c[2*i+1]*c[2*i+1])/256.0;
  }

  int mellIdx = 0;
  for ( i = 0; i < NP; ++i ) {

      if ( i==mell[mellIdx] ) {
        e[ 0 ] += spec[ mell[mellIdx] ];
      }

      if (( i > mell[ mellIdx ] ) && ( i <= mell[ mellIdx+1 ] )) {
        e[ mellIdx ] += spec[i];
      }

    if (i == mell[ mellIdx+1 ]) {
      mellIdx++;
    } 
  }

  for (i=0 ; i < NUM_BANKS ; i++ ) {
    if (e[i] <= 0.0) {
      e[i] = 0.0;
    } else {
      e[i] = fastlog(e[i]);
    }
  }
}
  // Calculate a DCT and only keep the first (NUM_BANKS/2) +1 coeffs
  dct_ii(NUM_BANKS, e, ret);

}

/****************************************************
Sound preprocessor. Takes a 16000 size sample (2s),
gets rid of noise, and normalizes to 8000 samples (1s)
*****************************************************/


/****************************************************
 * TOP LEVEL FUNCTION
 * Takes in a sound of size 16000 samples at 8kHz
 * (2 seconds), generates a fingerprint, and runs
 * it through the neural network classifier to get
 * the most likely result
*****************************************************/
int voicerec(volatile int *new_sample, int *guess){
#pragma HLS INTERFACE s_axilite register port=return offset=0x0010 bundle=voice_rec
#pragma HLS INTERFACE m_axi depth=8000 port=new_sample offset=slave bundle=voice_rec
#pragma HLS INTERFACE ap_none register port=guess
#pragma HLS INLINE

	static float inSound[8000] = {0};
	static int testSound[8000] = {0};
	int i ;
//#pragma HLS ARRAY_PARTITION variable=inSound block factor=26 dim=1

	memcpy(testSound,(const int*)new_sample,8000*sizeof(int));
	for(i=0; i < 8000; i++){
		inSound[i] = (testSound[i] - 6900)/1000.0;
	}

		if(inSound[7999]!=0){
	  		  int i = 0, j=0, stride = 0, classification = 0;
	  		  stride = NP/2;
	  		  int index = 0;
	  		  for (i = 0; i+NP <8000 ; i += stride) {
				#pragma HLS PIPELINE
				#pragma HLS UNROLL
	  			processChunk(i, result[index], inSound);
	  			index++;
	  		  }
	  		  classification = classifySound(result);
	  		  *guess = classification;
	  		  return classification;
	  	  }
//	}
	else{
		for(int i = 0; i < 7999; i++)
		{
			if(inSound[i] == 0)
				return i+10;
		}
	}
}
