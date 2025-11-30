#include <stdio.h>

// inputing 10 integers into array find and print largest and smallest values.


int main () {
        int i,min,max ;
        int arr [10];
        
        printf("Enter 10 ints into array: ");
        for ( i=0; i <10; i++)
	{ 
	     	scanf("%d", &arr [i] ); // bassically saying that to take the integer the user enters and store it into the initalized array that goes from 0-9.
	}
	// assuming the first and last are the smallest and largest and then work form there.
	min = arr[0];
	max = arr[0];

	for (i=1; i<10; i++)
	{	if(arr[i]>max) 
			{ max= arr[i]; // makes the new max = the item inside the index we are on that's greater than" max"
			}
		if (arr[i]< min)
			{ min = arr[i];  // does the same thing as the top but checks for minimum.
			}
	}
	printf("Largest value is %d\n", max);	
	        printf("Smallest value is %d\n", min);

	return 0; 
 }	
