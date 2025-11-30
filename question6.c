#include <stdio.h> 


// reading an array with a max number of 100, compute sum and average, whilst printing both with labels.

int main () {
int n, i; 
int sum = 0; 
	int arr [100] ;
float average ;
	printf("---Sum and Average Claculator---\n");

	        printf("Enter elements into array.(MAX is 100)\n");
		scanf("%d" ,&n);

		printf("Enter %d integers into array\n",n );
		for (int i= 0; i<n; i++ )
		{
		scanf("%d", &arr[i] );
		sum =sum + arr[i];
		}

		average= (float)sum/n;

		printf("Sum: %d\n",sum);
		printf("Avearge: %.2f\n",average);
	
		return 0;
}
