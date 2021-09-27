#ifndef __STUDENTDATABASE_H__
#define __STUDENTDATABASE_H__

#include <stdbool.h>

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
int search_rollno(student_database *, unsigned int, unsigned int);
int search_name(student_database *,  unsigned int, char *);
unsigned int search_maxmarks(student_database *,  unsigned int);
bool name_A_exist(student_database *,  unsigned int);
bool name_A(student_database *);

#endif