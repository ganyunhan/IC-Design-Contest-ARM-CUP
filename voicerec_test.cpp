#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "voicerec.h"
#include "lai.h"
#include "qian.h"
#include "ting.h"
#include "neuralNetworkSynth.h"


#if 1
int main(int argc, char *argv[]) 
{
  int classification, i = 0;
  int out;
  int  ctrl=1;
  // Number of test instances

  
  // Timer

#if 1
  classification = voicerec(&lai[0],&out);
  std::cout << "should be 1 ****************" << classification<<"\n";
//


#endif

  return 0;
}
#endif

