#include <stdio.h>
#include "student_database.h"

/*Function for reading student data */
void read_data(student_database *ptr){
    printf("Enter the name of student:");
    scanf("%[^\n]s",ptr->name);

    printf("Enter the roll no for student %s:",ptr->name);
    scanf("%u",&(ptr->rollno));

    printf("Enter the age for student %s:",ptr->name);
    scanf("%u",&(ptr->age));

    printf("Enter the marks for student %s:",ptr->name);
    scanf("%u",&(ptr->marks));

    getchar();
}

/* Function for displayig students data */
void display_data(student_database *ptr){
    printf("Student name: %s\n",ptr->name);
    printf("%s's rollno: %u\n",ptr->name,ptr->rollno);
    printf("%s's age: %u\n",ptr->name,ptr->age);
    printf("%s's marks: %u\n",ptr->name,ptr->marks);
}
