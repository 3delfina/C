#include <stdio.h>

int main ( void ) {
  char op , buffer [100];
  float x, y;

  printf (" Enter int, operation symbol (+-*/%) and int\n");
  //read user's input
  fgets (buffer , sizeof ( buffer ),stdin );
  sscanf (buffer , "%f %c %f", &x, &op , &y);

  //find which of the operations to calculate and output the result 
  switch(op){
    case '+':
      printf("%3.2f + %3.2f = %3.2f \n", x, y, x+y);
      break;
    case '-':
       printf("%3.2f - %3.2f = %3.2f \n", x, y, x-y);
       break;
    case '*':
       printf("%3.2f * %3.2f =  %3.2f \n", x, y, x*y);
       break;
    case '/':
       printf("%3.2f / %3.2f =  %3.2f\n", x, y, x/y);
       break;
  }
  
  return 0;
}