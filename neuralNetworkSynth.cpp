#include <iostream>
#include <math.h>

#include "speech_weights.h"
#include "neuralNetworkSynth.h"

float input[INPUT_SIZE+1];
float hidden[HIDDEN_SIZE+1];
float output[OUTPUT_SIZE];

void feedForward(float pattern[INPUT_SIZE]) {

loop1:	//ttern value into input neurons
  for (int j = 0; j < INPUT_SIZE; j++){
#pragma HLS UNROLL

    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    input[j] = pattern[j];
  }
loop2:
  // enter values from the input layer to the hidden neurons
  for (int j = 0; j < HIDDEN_SIZE; j++) {
	  hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < INPUT_SIZE+1; k++)
      hidden[j] += input[k] * weightIH[k][j];
      hidden[j] = 1/(1+exp(-1*(hidden[j])));
  }
loop3:
  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < OUTPUT_SIZE; j++) {
   output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < HIDDEN_SIZE+1; k++)
      output[j] += hidden[k] * weightHO[k][j];
      output[j] = 1/(1+exp(-1*(output[j])));
  }
}

int guessClassification() {
  float second_max = 0;
  float max = 0;
  int guess;
  for (int j = 0; j < OUTPUT_SIZE; j++) {
 //  std::cout << "output: " << j << " = " << output[j] << "\n";
    if (output[j] > max) {
      guess = j;
      second_max = max;
      max = output[j];
    }

  }
  std::cout << "accuracy " << max<<"\n";
  if(max<0.5){
  return 8;}
  else{
	  switch(guess){
		  case 0: return 1;break;
		  case 1: return 2;break;
		  case 2: return 3;break;
		  default:return 9;break;
  }
  }
}

int classifySound(float input[INPUT_ROWS][INPUT_COLS]) {
	  int guess;
	  float flatInput[INPUT_SIZE];

  for (int i = 0; i < INPUT_ROWS; i++) {
	  for (int j = 0; j < INPUT_COLS; j++) {
      flatInput[i*INPUT_COLS + j] = (float)(input[i][j]);
    }
  }

  feedForward(flatInput);
  return guessClassification();
}
