#include <stdio.h>

int main(void){

  int numberOfBottles;
  char buffer [100];
  printf (" Enter the number to start our song!\n");
  //read number of bottles from user's input
  fgets (buffer , sizeof ( buffer ),stdin );
  sscanf (buffer , "%d", &numberOfBottles);
  //check if the number is in range 1-99, if yes, start the loop from numberOfBottles down to 1
  if (numberOfBottles > 0 && numberOfBottles <= 99){
   for (int i=numberOfBottles; i >= 1 ; i--) {
     if (i>1){
       printf ("%d Green Bottles, sitting on the wall\n%d Green Bottles, sitting on the wall\n", i, i);
       printf ("and if 1 Green Bottle should accidentally fall...\n");
       //A special case when we need singular as 1 bottle is left
       if(i==2){
         printf ("...there\'ll be 1 Green Bottle, sitting on the wall.\n");
       }
       else{
         printf ("...there\'ll be %d Green Bottles, sitting on the wall.\n", i-1);
       }
     }
     //verse about the last 1 bottle
     else{
       printf ("%d Green Bottle, sitting on the wall\n%d Green Bottle, sitting on the wall\n", i, i);
       printf ("and if 1 Green Bottle should accidentally fall...\n");
       printf ("...there\'ll be no Green Bottles, sitting on the wall.\n");
     }
     printf("\n");
   }
  }
  //case when the input is not in the range 1-99
  else{
    printf ("The number of bottles should be non-negative and less than 100!");
  }

}