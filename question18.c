#include <stdio.h> 

// intializing a student structure that can be used later.
 struct Student {
	 char name[40];
	 int roll;
	 float marks ;
 };
int main () { 
	// makes 5 instances of student as s.
	struct Student s[5];
	int i , maxNumb=0;

	printf("Enter 5 students (Name Roll Marks):  \n");
	for (i=0 ; i<5;i++)
		// reads / stores input that user entered into arrays.
		{ scanf("%s %d %f", s[i].name ,&s[i].roll, &s[i].marks);

			// checks if the student is better than the current best each time the loop runs
		if (s[i]. marks > s[maxNumb].marks){
			maxNumb= i;
		}
	
	}
	printf("Top: %s, Rolls: %d , Marks: %2.f\n", s[maxNumb].name, s[maxNumb].roll, s[maxNumb].marks); 

	return 0;
} 
