#include <stdio.h>

int main (void) {
  int i ,* myPtr , ** myPtrPtr ;
  int a[2] = {1 ,2}; 
  
  
  printf ("Printing a gives %p\n", a ); //the bare name of an array is a pointer to the memory location where the first element of an array is stored is printed
  printf ("Printing &a gives %p\n", &a ); //memory address of the array's first element is printed (same as in the statement before)
  printf ("Printing *a gives %d\n", *a );  //the contents of the memory location where an array starts are printed, therefore it is 1
  printf ("Printing a[0] gives %d\n", a[0] ); //first element is 1
  printf ("Printing a[1] gives %d\n", a[1] ); //second element is 2
   
  
  i = 6;
  myPtr = &i;  //myPtr points to the address of i
  myPtrPtr = &myPtr ; //myPtrPtr points to the address of Ptr
  
  
  {
    int i = 7;
    * myPtr = 45;
    printf ("The value %d is stored in location %p\n", *myPtr , myPtr );
    printf ("The value %d is stored in location %p\n", i, &i);
    
    //output was:
    //The value 45 is stored in location 0x2d
    //The value 7 is stored in location 0x7
    //The numbers printed for locations are 7 and 45 in decimal and hexadecimal systems 
    //i is declared and initialised so it does not affect the code outside the scope
    //value of i from the main scope changes from 6 to 45
    
  }
  
  //**myPtrPtr points to the value of i, as *myPtrPtr points to the address of i
  //changed %p to %d as it is a decimal value, not a pointer's address in hex
  printf ("The value %d is stored in the location %p\n", **myPtrPtr , *myPtrPtr );
  printf ("The value %d is stored in location %p\n", i, &i);
  
  //output was:
  //The value 0x6 is stored in the location 0x6
  //The value 6 is stored in location 0x6
  //myPtrPtr contained value of i in the main scope (=6) so it was printed in decimal and hex

  return 0;
}