#include "complexmath.h" //functions prototypes are defined there
#include <math.h>

// Calculates the real offset of the complex cube roots of a real , given the real root
double re_complexroots ( double z) {
  return -1.0*z/2.0 ;
}

// Calculates the imaginary parts of the complex cube roots of a real , given the real root
double im_complexroots ( double z) {
  return sqrt (3.0) *(z /2.0) ;
}
