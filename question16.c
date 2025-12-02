#include <stdio.h>

// sets a structure Student that holds name , roll and makrs, and a set char name of 40.
struct Student { 
	char name [40];
	int roll;
	float marks;
	};

int main () { 
	// making s hold a instance of Student.
	struct Student s;

	printf("Enter name, roll, and marks: ");
	// prompts and recieves input based of the questions at the top.
	scanf("%s %d %f", s.name, &s.roll, &s.marks);
// prints one students data and prints it neatly.
	printf("Name: %s\nRoll: %d\nMarks: %2.f\n", s.name, s.roll, s.marks);
	return 0;

	}
