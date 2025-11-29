#include <stdio.h>

// fucntion float toCelsius (float f) converts fahrenheit to celsius.
int main () {
	float input;
	double result;

	printf("Enter temperature in Fahrenheit\n:");
	scanf ("%f",&input);

	result = (input - 32) * 5.0/9.0 ;


	printf("\nYour result is:%f \n", result);


	return 0;

}
