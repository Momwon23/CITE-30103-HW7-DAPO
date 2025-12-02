#include <stdio.h>

struct Date { 
	int day;
	int month;
	int year; 
};

struct Student { 
	char name [40] ;
	int roll;
	// nested structure  of date copied into dob.
	struct Date dob;
};

	int main () {
	struct Student s;
	
	printf("Enter name , roll: ");
	scanf("%s %d", s.name, &s.roll);

	printf("Enter Date of Birth (Month, Day, year): ");
	// reads integer of month day and year and  they get stored into dob from the instance of date through the nested structure.
	scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

	printf("Student: %s, Roll: %d\n", s.name, s.roll);
	printf("DOB: %02d/%02d/%d\n",s.dob.day, s.dob.month, s.dob.year);

	return 0 ;
	} 

