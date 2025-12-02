#include <stdio.h> 

int square (int x) {
	return x *x ;
} 
int main() {

	// delcaring function pointer
	int (*funcPtr)(int);

	// assing address of square function
	funcPtr = &square;

	int num =5;
	// call function using pointer
	int result= (*funcPtr)(num);
			
			printf("Square of %d is %d\n", num, result);
			return 0;
			}
