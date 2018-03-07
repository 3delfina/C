#include <stdio.h>

int main(void){
  //declaring and initialising an array
  int twoD[7][6] = {{0, 50, 100, 150, 250, 150},{0, 100, 50, 0, 200, 30},{0, 160, 140, 30, 0, 40},{220, 30, 40, 50, 50, 200}, 
    {220, 1, 2, 3, 200, 200}, {220, 50, 100, 150, 250, 150}, {220, 50, 100, 150, 250, 150}};
  
    //print the first line with the marker, width, heigh and max value which represents a white colour
    printf("P2 %lud %lud 255 \n", sizeof(twoD[0])/sizeof(twoD[0][0]), sizeof(twoD)/sizeof(twoD[0]));
    
   //iterating over rows
   for (int i=0; i < sizeof(twoD)/sizeof(twoD[0]) ; i++){
     //iterating over elements in each row and printing them
     for (int j=0; j<sizeof(twoD[0])/sizeof(twoD[0][0]); j++){
       printf("%d " , twoD[i][j]);
     }
     //print a newline character after printing one row
     printf("\n");
   }

  return 0;
}