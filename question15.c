#include <stdio.h>

int main () { 

	char str [100]; 
	int i =0 , words = 0; 
	int inWord =0 ; // to trag if we are inside a word.


	printf("Enter a line of text: ");
	scanf("%[^\n]", str); // space before % skips leading whitespace.
			   

	while (str[i] != '\0')
		{  // if current char is NOT a space...
			if (str[i] != ' '){ 
				 // if we are not in the word we just found a new one.
			if (inWord ==0) {
				words++;
				inWord =1;
			} 
		} else { 
			// if its a space, we are not longer in the word.
			inWord =0;
		} 
			i++;
		} 
	printf("Number of words: %d\n", words);
	return 0;
}
