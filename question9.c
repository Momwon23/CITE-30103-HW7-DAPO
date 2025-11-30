#include <stdio.h> 

// gets input from user and enters into 5 arrays and then reverses without using a second array.

int main () { 

	int arr[5];
	int i, temp;

	printf("Enter 5 integers to be reveresed: ");
	for(i=0; i < 5; i++)
		{ scanf("%d",&arr[i]); // loop runs until 5 elements are entered by the user and each element entered gets put into the 5 space remaining.
		}
 
	// going through 2 times and swapping the first and last array[].
	for (i =0; i<5/2; i++ )
		{ 
		temp = arr[i]; //first input user entered into array gets a new name called temp.
		arr[i] = arr[4-i]; // this is where we swap the first index to thae last one.
		arr[4-i] = temp; // swapping the last index to the first. or the second after the 2nd iteration.
		}
	printf("Reversed array:");
	for(i=0;i<5; i++) 
	{ printf ("[%d] ",arr[i] );
	}
printf("\n"); // creates a new line after you are done prinitng array for better visualization.
	return 0;
}
