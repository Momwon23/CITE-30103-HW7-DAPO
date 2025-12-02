#include <stdio.h> 

int main ()  {
	int arr[5];
	int i ;
	
	printf("Enter 5 integers: ");
	for (i=0; i<5; i++)  {
		// storing using pinter arithmetic
		
	scanf("%d", (arr+i));
	}
	printf("You entered: ");
	for (i =0; i<5; i++) {
 // accessing using pointer arithmetic (no brackets).
 	printf("%d ", *(arr +i));
	 }
	printf("\n");
	return 0;
} 
