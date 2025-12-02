#include <stdio.h>
#include <string.h> 

// read a word no spaces and check if its a palindrome case sensitive. print palindrome or not palindrome.

	int main () {
char str [100];
int i, len , Palindrome =1;

printf("Enter a word: ");
scanf("%s",str );

len = strlen(str);

//checks for the first and last vs second- last.
	for( i=0; i<len /2; i++)
	{
		if (str[i] != str[len -1 -i])
			{
				Palindrome=0;
				break;
			}
	}

if(Palindrome) printf("Palindrome.\n");
else  printf("Not Palindrome.\n");

	return 0; 
	}
