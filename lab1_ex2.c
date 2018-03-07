#include <stdio.h>

int main(){
	const int x = 5;
	int y = 2;
	printf("The value of 5+2 is %3d \n", x+y);
	printf("The value of 5-2 is %3d \n", x-y);
	printf("The value of 5*2 is %3d \n", x*y);
	printf("The value of 5/2 is %3.2f \n", (float) x/y);
	printf("The value of 5%2 is %3d \n", x%y);
	
	return 0;
}
