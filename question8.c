#include <stdio.h> 


// given an array of integers count how many are even and how many are od print both odd and even #.
int main ()  {

int numb , even=0, odd=0;
int arr[10] ,n,i;

printf("How many elements do you want in your array? ");
scanf("%d",&n);


        printf("Enter %d elements into array\n", n); // no & or * because we just want to read the value that's there.
for (i=0;i<n;i++)
	{ scanf ("%d", &arr[i]); // saves each input user entered into array. used & because of the we reading address of int*.
	  if (arr[i] % 2 ==0) { even ++;  }
	  else{ odd++;
	       }
	}
printf("There are [%d] even numbers.\n", even);
printf("There are [%d] odd numbers.\n", odd);

return 0;
} 


