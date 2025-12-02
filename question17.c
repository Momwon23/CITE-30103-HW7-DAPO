#include <stdio.h> 

// creating a structure that 5 students will be able to use.
struct Student { 
	char name [40];
	int roll;
	float marks;
	};

int main () { 
	struct Student s[5];
	int i;

	printf("Enter 5 students(name roll marks) :\n");
	// reading input through d
	for (i=0; i<5; i++) 
		{ 
		 scanf("%s %d %f", s[i].name ,&s[i].roll, &s[i].marks);
		}
	printf("\n---Student Records:---\n");
	// loops through 5 times.
	for (i=0; i<5; i++)
			{ 
		// prints the outputs in a format of string, int, and float inside the loop 5 times.
			printf("%s\t%d\t%2.f\n", s[i].name, s[i].roll, s[i].marks);
			}
		return 0;
	}

