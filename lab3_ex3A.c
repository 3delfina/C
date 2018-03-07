# include <stdio.h>

struct TwoDPoint {
  double x, y;
  };
  
int main( void ) {

  //specified an alias for an existing type to create a and b using TwoDPoint_t
  //as there was an error in line of code sscanf (input ,"%f ,%f", &(a.x), a.y);
  //Lab3_Exe3.c:16:31: error: request for member ‘x’ in something not a structure or union
  typedef struct TwoDPoint TwoDPoint_t;
  
  TwoDPoint_t a[2] = {{0, 0}}; //creating an array of structs
  //n - number of elements in the array
  int n = sizeof(a)/sizeof(a[0]);
  
  {
    //The input doesn't have to be handled in a separate block
    //I assume it was done to make input separated from them output
    
    char input [100];
    //iterating and reading user's input to structs of an array
    for (int i=1; i<=n; i++){
      printf(" Please enter the x and y coordinates of the point number %d , separated by a comma. \n" , i);
      fgets (input , sizeof ( input ), stdin );
      sscanf (input ,"%lf ,%lf", &(a[i].x), &(a[i].y));  
    }
  }
  
  double x_dist = (a[1].x - a[2].x), y_dist = (a[1].y - a[2].y);
  
  printf ("The square of the distance between the two points is: %lf\n", ( x_dist * x_dist )+( y_dist * y_dist ));
  
  return 0;
}