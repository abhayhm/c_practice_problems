/* Name: Abhay HM
 * Date: 27/09/2021
 * Info: Program to store and diaplay data of 10 students dynamically. 
 */

#include <stdio.h>
#include <stdlib.h>
#include "student_database.h"

int main(){
    unsigned int size = 0, choice = 0; 
    student_database *database;

    /* Read from user */
    printf("Enter the number of students:");
    scanf("%u",&size);

    if(0 == size){
        printf("Database not created\n");
        return 0;
    }

    /* Allocate memory for student */
    database = (student_database *)calloc(size, sizeof(student_database));
    if(NULL == database){
        printf("Unable to create student database\n");
        return 0;
    }
    
    /* Reading student database */
    printf("Enter the details of %u students:\n",size);
    for(unsigned int i = 0; i < size; ++i){
        read_data(database + i);
    }
    printf("\n");

    /* Options for user */
    printf("List of operations available\n");
    printf("1) Search student by rollno\n");
    printf("2) Search student by name\n");
    printf("3) Details of student who has scored hightest marks\n");
    printf("4) Details of student whose name starts from 'A'\n");
	printf("Enter your choice:");
	scanf("%u",&choice);
    
    /* Case for selected option */
    switch(choice){
        /* For searching with rollno */
        case 1:{
                   unsigned int rollno = 0;
                   int student = 0;
                   printf("Enter the roll no to search:");
                   scanf("%u",&rollno);
                    
                   student = search_rollno(database, size, rollno);
                   if(-1 == student){
                       printf("No student exist with rollno %u\n",rollno);
                   }
                   else{
                       printf("Student details with rollno %u:\n",rollno);
                       display_data(database + student);
                   }
               }break;

        /* For searching with name */
        case 2:{
                   char name[20] = {0};
                   int student = 0;
                   printf("Enter the student name to search:");
                   scanf("%s",name);
                   
                   student = search_name(database, size, name);
                   if(-1 == student){
                       printf("No student exist with name %s\n",name);
                   }
                   else{
                       printf("Student details with name %s:\n",name);
                       display_data(database + student);
                   }
               }break;
        
        /* For searching student with max marks */
        case 3:{
                   unsigned int student = 0;

                   student = search_maxmarks(database, size);
                   printf("Student details with maximum marks is:\n");
                   display_data(database + student);
               }break;

        /* For searching student whose name starts with A */
        case 4:{
                   if(name_A_exist(database, size) == true){
                       printf("Students details whose name start with 'A' are:\n");
                       for(unsigned int i = 0; i < size; ++i){
                           if(true == name_A(database + i)){
                               display_data(database + i);
                           }
                       }
                   }
                   else{
                       printf("No student name starts from 'A'\n");
                   }
               }break;

        /* Invalid input */
        default:{
                    printf("Invalid choice\n");
                }break;
    }

    /* Deleting student records */
    for(unsigned int i = 0; i < size; ++i){
        free(database + i);
    }

    /* Exit */
    return 0;
}

