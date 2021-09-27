#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "student_database.h"

/*Function for reading student data */
void read_data(student_database *ptr){
	getchar();
	
    printf("Enter the name of student:");
    scanf("%[^\n]s",ptr->name);

    printf("Enter the roll no for student %s:",ptr->name);
    scanf("%u",&(ptr->rollno));

    printf("Enter the age for student %s:",ptr->name);
    scanf("%u",&(ptr->age));

    printf("Enter the marks for student %s:",ptr->name);
    scanf("%u",&(ptr->marks));
}

/* Function for displayig students data */
void display_data(student_database *ptr){
    printf("Student name: %s\n",ptr->name);
    printf("%s's rollno: %u\n",ptr->name,ptr->rollno);
    printf("%s's age: %u\n",ptr->name,ptr->age);
    printf("%s's marks: %u\n",ptr->name,ptr->marks);
}

/* Function for searching with roll no */
int search_rollno(student_database *database, unsigned int size, unsigned int rollno){
	for(unsigned int i = 0 ; i < size; ++i){
		if((database + i)->rollno == rollno){
			return i;
		}
	}
	return -1;
}

/* Function for searching with name */
int search_name(student_database *database,  unsigned int size, char *name){
	for(unsigned int i = 0 ; i < size; ++i){
		if(0 == strcmp((database + i)->name, name)){
			return i;
		}
	}
	return -1;
}

/* Function for searching max marks */
unsigned int search_maxmarks(student_database *database,  unsigned int size){
	unsigned int position = 0;
	unsigned int marks = 0;
	for(unsigned int i = 0 ; i < size; ++i){
		if(marks < (database + i)->marks){
			marks = (database + i)->marks;
			position = i;
		}
	}
	return position;
}

/* Function for searching student starting with 'A' */
bool name_A_exist(student_database *database,  unsigned int size){
		for(unsigned int i = 0 ; i < size; ++i){
		if('A' == (database + i)->name[0]){
			return true;
		}
	}
	return false;
}

/* Function for checking student starting with 'A' */
bool name_A(student_database *database){
	if('A' == (database)->name[0]){
			return true;
	}
	return false;
}