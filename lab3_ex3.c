# include <stdio.h>

struct TwoDPoint {
  double x, y;
  };
  
int main( void ) {

  //specified an alias for an existing type to create a and b using TwoDPoint_t
  //as there was an error in line of code sscanf (input ,"%f ,%f", &(a.x), a.y);
  //Lab3_Exe3.c:16:31: error: request for member ‘x’ in something not a structure or union
  typedef struct TwoDPoint TwoDPoint_t;
  
  TwoDPoint_t a, b = {0.0 ,0.0};
  
  {
  //The input doesn't have to be handled in a separate block
  //The intent was to make input separated from them output
  char input [100];
  

  puts(" Please enter the x and y coordinates of the 1st point , separated by a comma .");
  fgets (input , sizeof ( input ), stdin );
  //changed %f to long float because the input is supposed to be of type double
  //the input values go to some memory location, hence use a pointer 
  sscanf (input ,"%lf ,%lf", &(a.x), &(a.y));


  puts(" Please enter the x and y coordinates of the 2nd point , separated by a comma .");
  fgets (input , sizeof ( input ), stdin );
  sscanf (input ,"%lf ,%lf", &(b.x), &(b.y));
  
  }
  
  double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
  
  printf ("The square of the distance between the two points is: %lf\n", ( x_dist * x_dist )+( y_dist * y_dist ));
  
  return 0;
}