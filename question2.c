#include <stdio.h>

// function with 3 max intns that returns the largest of 3 integers without using logical operators. 


int max3(int a, int b, int c) ;

int main () {
int a,b,c ;
int result;

      printf("Enter 3 numbers: "); 
      // didnt put , because then it would tell scanf to skip and omit the whitespaces. hence you would need a different format to read the users input.
      scanf("%d %d %d", &a, &b, &c) ;


result = max3 (a,b,c); // calls function

printf("Your Largest number is: %d\n", result);
return 0; 
     } 

//function definition.
int max3 (int a , int b, int c) {

	int max_val= a ; // makes the assumption that a is the largest.

	if (b > max_val) { // compares the b value to the "max value".
           max_val = b;
	}

	if (c > max_val) {
	max_val = c ; // saying if c is greater than the max value then c is the max value.
	}

	return max_val;

} 

