#include <stdio.h>

int main(void){

   for (int i=10; i >= 1 ; i--) {
     //when there are more than 1 bottle, use plural
     if (i>1){
       printf ("%d Green Bottles, sitting on the wall\n%d Green Bottles, sitting on the wall\n", i, i);
       printf ("and if 1 Green Bottle should accidentally fall...\n");
       //when only two bottles are left, last line has a singular 'bottle', not 'bottles'
       if(i==2){
         printf ("...there\'ll be 1 Green Bottle, sitting on the wall.\n");
       }
       else{
         printf ("...there\'ll be %d Green Bottles, sitting on the wall.\n", i-1);
       }
     }
     //version for one bottle
     else{
       printf ("%d Green Bottle, sitting on the wall\n%d Green Bottle, sitting on the wall\n", i, i);
       printf ("and if 1 Green Bottle should accidentally fall...\n");
       printf ("...there\'ll be no Green Bottles, sitting on the wall.\n");
     }
     printf("\n");
   }
    

}