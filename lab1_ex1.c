//BUG1 included standart input/output library
#include <stdio.h>

int k = 4; //k has a file scope and is allocated here


int main(void) {
  printf("Last value of int k with a file scope is %d\n", k);
	int i = 50; //i has a main block scope and is allocated here

	unsigned int j = i * 2;  //j has a main block scope and is allocated here
	printf("Last value of unsigned int j is %.2d\n", j);
	//BUG2 ; (semicolon) had to be at the end of the line
	double k = 1.0; // double k is shadowing the int k, it has a main block scope and it is allocated here
	{
		float i = 5.0; //float i is shadowing the int i, it has an innner block scope and is allocated here
		printf("The value of i is %3f\n", i);
		k = i * j;
		i *= 6;
		//inner float i scope ends
		printf("Last value of float i is %.2f\n", i);
		printf("Last value of double k is %.2f\n", k);
		
	}
	//BUG3 commented out the line below, conflicting types of j
	//double j;
	i = k + i; //or i += k
	printf("Now , the value of i is %d\n", i);
	printf("Last value of int i is %d\n", i);
	
	return 0;
	//outer int i, unsigned int j and double k scope ends
}

