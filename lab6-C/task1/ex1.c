#include <stdio.h>
#include <stdlib.h>
// printpgm.h - header for the printpgm.c which is used for drawing
#include "printpgm.h"

//pros and cons of two file formats are described in printpgm.c

void fill(int height, int width, int array [][width]){
   //iterating over rows
   for (int i=0; i < height ; i++){
     //iterating over positions in the row and using rand to assign values to positions
   for (int j=0; j<width; j++){
       array[i][j] = (rand() % (255 + 1 - 0));
     }
   }
}



int main(int argc , char *argv []){

  int width = 7;
  int height = 6;
  //declaring an array
  int twoD[height][width];  

    //calling two functions to initialise an array and to print its elements
    fill(height, width, twoD);
    image("data.txt",height, width, twoD);
    image("data.pgm",height, width, twoD);    
    imageBinary("dataBinary.txt",height, width, twoD);
    imageBinary("dataBinary.pgm",height, width, twoD);  
    
  return 0;
}
