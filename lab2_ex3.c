#include <stdio.h>

int main(void){

  int end = 0; //when it is one, the program will terminate
  
  //use do-while as we need to test at least one number
  do{
      int n; //input number from user
      char buffer [100];
      //reading a number from user's input
      printf ("Please Enter a number\n");
      fgets (buffer , sizeof ( buffer ),stdin );
      sscanf (buffer , "%d", &n);
      int i = 2; //i is used in the loop 
      int found = 0; //if found is 1, the number n has at least one squared divisor and we can print the result
      do{
        if(n%(i*i)==0){
          printf ("Not Squarefree\n");
          found = 1;
        }
        i = i+1;
      }
      while(!found && i*i<n); //keep looking for the squared divisors
  
      if (! found){           // if broke out of the inner loop, check for the reason (i*i>=n or  not squarefree)
        printf ("Squarefree\n");
      }
      printf ("Another test? Y/N\n"); //ask if the user wants to continue and if No, terminate
      char buffer1[10];
      char decision;
      fgets (buffer1 , sizeof ( buffer1 ),stdin );
      sscanf (buffer1 , "%c", &decision);
      if (decision == 'N'){
        end = 1;
      }
  }
  //keep iterating until user says 'N' to the question "Another test?"
  while(!end);

}