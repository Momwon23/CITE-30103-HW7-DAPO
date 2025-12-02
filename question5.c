#include <stdio.h> 

// a recursive function long factorial , if n< 0 prints error message , otherwise print n!

long factorial (int n);


	int main () {
int input; 
long result;
	printf("Enter a number:");
	scanf("%d", &input );
		 
result= factorial (input);
printf("Factorial of %d is %ld");
return 0; // meaning code ended succesfully.
	}

long factorial (int n) {

if(n==0) {
return 1;

}else {
return n * factorial (n-1);
}
}
