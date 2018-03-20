#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//main function, takes arguments and calls other functions to check if arguments are valid and to perform calculations
//results are printed here
int main (int argc , char * argv []) {
  double x, cub_x , re_cub_x , im_cub_x ;
  x = validate_input (argc , argv);
  cub_x = cbrt (x);
  re_cub_x = re_complexroots ( cub_x );
  im_cub_x = im_complexroots ( cub_x );
  printf ("The cube roots of %f are %f, %f + %fi and %f - %fi .\n", x, cub_x , re_cub_x , im_cub_x , re_cub_x ,im_cub_x );
  return 0;
}
