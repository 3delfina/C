#include <stdio.h> 
#include "turtle.h"
#include <math.h>
#include <string.h>


int main (int argc , char *argv []){

  int N; //the number of angles of the polygon
  //checking if the program is executed with the name “square”, assigning number of sides to 4 if it is
  if (strcmp(argv[0], "./square") == 0){
    N=4;
  }
  else{
    //if there are no command line arguments passed (argc = 1 as 0th element is name of the executable), notify the user
    if (argc == 1){
      printf ("There should be an number of angles specified in order to draw a polygon!\n");
      return 1;
    }
    //read the 1st argument, assign it to N
    sscanf (argv[1] , "%d", &N);
    //polygon must have at least 3 angles, check that
    if(N<3){
      printf ("There should be at least 3 angles to draw a polygon!\n");
      return 2;
    }
  }
  
  //Initialize the 2d field that the turtle moves on, size - 256*256 pixels and prepare for drawing
  turtle_init(256, 256);
  turtle_reset();
  turtle_pen_down();
  
  //angle to turn for turtle depends on the number of sides of the polygon, it's calculated using the following formula
  double angle = 360/N;
  int i; //index used for the loop
  
  //turtle draws a line of length of 20 and turns and repeats the action to draw a complete polygon
  for (i = 0; i < N; i++){
    turtle_forward(20); 
    turtle_turn_right(angle);
  }
  turtle_pen_up(); //finish drawing
  
  turtle_save_png("mylogo.png"); //save the drawing
 
  return 0;
}
