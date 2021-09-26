#ifndef __STUDENTDATABASE_H__
#define __STUDENTDATABASE_H__

/* Structure for student database */
typedef struct student{
    unsigned int rollno;
    unsigned int age;
    unsigned int marks;
    char name[20];
}student_database;

/* Function declaration */
void read_data(student_database *);
void display_data(student_database *);

#endif
