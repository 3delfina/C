#include <stdio.h>
#include <stdlib.h>


void fill(int height, int width, int array [][width]){
   //iterating over rows
   for (int i=0; i < height ; i++){
     //iterating over positions in the row and using rand to assign values to positions
   for (int j=0; j<width; j++){
       array[i][j] = (rand() % (255 + 1 - 0));
     }
   }
}

void image(int height, int width, int array [][width]){
  //print the first line with the marker, width, heigh and max value which represents a white colour
  printf("P2 %d %d 255 \n", width, height);
  //iterating over rows
   for (int i=0; i < height ; i++){
     //iterating over elements in each row and printing them
     for (int j=0; j<width; j++){
      printf("%d " , array[i][j]);
     }
   //print a newline character after printing each row
   printf("\n");
  }
}

int main(int argc , char *argv []){

  int width = 7;
  int height = 6;
  //declaring an array
  int twoD[height][width];  

    //calling two functions to initialise an array and to print its elements
    fill(height, width, twoD);
    image(height, width, twoD);
    
  return 0;
}