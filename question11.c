#include <stdio.h> 
int main() { 
	int i=0;
char name [100];
 printf("Enter a string with (no spaces): \n");
	scanf(" %s", name);

	while (name[i] != '\0') {
		i++;
	}
 printf("String length: %d.\n", i);
  return 0;
}
