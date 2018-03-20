#include "validate.h" //function prototype is there
#include <stdio.h>
#include <stdlib.h>

//checking if input is valid, exiting otherwise
double validate_input (int argc , char * argv []) {
  if (2!= argc) {
    fputs ("Too many inputs - just enter one double !", stderr);
    exit (1);
  }
  double val;
  int parsed = sscanf ( argv [1] , "%lf", &val );
  if (0== parsed ) {
    fputs (" Could not parse input as a double !", stderr );
    exit (1);
  }
  return val;
}