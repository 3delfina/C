#include <stdio.h>

int rfactorial (int n);
int factorial(int n);

int main (int argc , char *argv []){
  int n;
  //assign n a value of the argument
  sscanf (argv[1] , "%d", &n);
  printf ("Factorial of %d gives %d\n", n, factorial(n) );
  printf ("Recursive factorial function for %d gives %d\n", n, rfactorial(n) );
  return 0;
}


int factorial(int n){
  int result = 1;
  //multiply the result by n and subtract 1 from n until it is 1
  while( n>1){
    result *= n;
    n--;
  }
  return result;
  
}


int rfactorial (int n){
	//factorial of 0 should also return 1, so I included it here
  if (n==1 || n==0){
    return 1;
  }
  else{
    //do recursion (call itself again)
    return n*rfactorial(n-1);
  }
}