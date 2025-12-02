#include <stdio.h> 

struct Student { 
	char name [40];
	int roll;
	float marks;
};

// function definition 
 void printStudent(struct Student s){ 
	 printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name,s.roll, s.marks);
 } 
int main () { 
	struct Student s1;

	printf("Enter Name, Roll, Marks:");
	scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

	printStudent(s1); // passing struct to function.
			return 0;
} 
