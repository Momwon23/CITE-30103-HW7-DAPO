#include <stdio.h>

// code to return 1 if n is prime &  0 otherwise. Basically checking whether a number is prime or not.


int primeChecker (int n) ;

int main () {

	int n; 
	int result ;

	printf("Enter a number: "); 
	scanf("%d", &n); 
// to prove a number is prime you need to prove that it divisible by any number other than itslef and 1.

	if(primeChecker(n) ==1 )
		printf("Prime!!\n"); // if we get 1 as the output after we checked if the number is prime it proves that the number is prime if not it does the opposite and prints NOT prime.
	else {
	
	printf("NOT Prime\n");
	}
	return 0; 
} 

int primeChecker (int n)   
{ 

if (n<2 )
	return 0; // filters out the input being 0 or 1.
		  //
int i =2 ;// we start at 2 because we know every numb is n/1.
while( i*i<=n  ) // bassically saying that we should loop until i reaches the sqaure root of n
{
if  (n%i ==0 ) // the whole point of this part is to check if n is divisible by i which is 2.
       return 0; // stops after finding 1 we dont need more than 1 to prove its true.
i++ ;

} return 1; 

   }
