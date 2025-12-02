#include <stdio.h> 
#include <stdlib.h>

// malloc dynamic memory

int main () {
	int n, i, sum=0; 
	int *ptr; 
	printf("Enter number of elements: ");
	scanf("%d",&n);

	// dynamically allocate memory
	ptr= (int*)malloc (n * sizeof(int));

	if (ptr ==NULL) {
		printf("Memory allocation failed \n");
		return 1;
		 } 
	printf("Enter elements: ");
	for (i=0; i<n; i++ ) 
		{
			scanf("%d",(ptr+i));
			sum += *(ptr+i);
		} 
	printf("Average: %2.f\n", (float)sum/n);

	// free the memory !
	free(ptr);
	return 0;
}

