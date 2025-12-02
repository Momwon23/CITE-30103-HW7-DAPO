#include <stdio.h>
#include <string.h>

int main () {

	char str [100];
	int i =0, vowels =0, conson =0, digits=0;

	printf("Enter a word: ");

	//reads a line along with the spaces.s
	scanf("%[^\n]", str);

	while (str[i] != '\0'){
		char ch = str [i];

		// checking if the number is from 0-9.
		 if (ch>= '0' && ch<='9')
		 { digits ++;
		 }

		 //check for letter existing from a -z.
		 else if ((ch>= 'A' && ch<= 'Z') || (ch >= 'a' && ch<= 'z')) {

			 // converting to lower cahse and checkinf for vowels.

			 char lower_ch;
		 if (ch >= 'A' && ch<='Z')
		 	{ lower_ch = ch+32;// converts upper case to lowercase.
			} else { 
				lower_ch =ch;
			} 

		 // checking for vowels.
		 if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch =='o' || lower_ch =='u' ) 	 
			 { 
				 vowels ++; // increasing vowel count. 
					}
		 else { 
			 conson ++; // increases general count of consonants.
		 }
	}
	i++;
}
printf("Consonants: %d, Vowels: %d, Digits: %d\n", conson, vowels, digits );
return 0;
} 
