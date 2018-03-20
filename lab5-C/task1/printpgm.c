#include "printpgm.h"
#include <stdio.h>
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