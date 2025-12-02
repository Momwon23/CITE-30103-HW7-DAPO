#include <stdio.h> 

int main() {
	char str1[100] , str2 [50] ;
	int i =0, j=0;

	printf("Enter first string: ");
		scanf("%s", str1);

	printf("%s", str2);
		scanf("%s",str2);

		// moves i to the end iof string1 
	
		while (str1 [i] != '\0') { // reads 
			i++ ;
			 }

		// copies str2  to end of str1.
		while (str2[j] != '\0')
		{ 
			str1[i] = str2[j];
			i++;
			j++;
		} 

		str1[i] = '\0' ;

			printf("Concatenated: %s\n" , str1);
		return 0;
}
