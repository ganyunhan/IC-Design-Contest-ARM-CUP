
#ifndef VOICEREC_H
#define VOICEREC_H
#include <ap_int.h>
#include "hls_stream.h"
#define NUM_BANKS 26
#define NP 256
#define STRIDE NP/2
#define NUMRESULTS 63
#define ORIGSIZE 16000
#define SOUNDSIZE 8000

void processChunk( int sp, float *ret, float *inSound );

void preprocessSound(float *inSound, int inSize, float *outSound, int outSize);

int voicerec(volatile int *new_sample, int *guess);
//int voicerec(volatile int *new_sample);
#endif
