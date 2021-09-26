/* Name: Abhay HM
 * Date: 26/09/2021
 * Info: Program to store and diaplay data of 10 students. 
 */

#include <stdio.h>
#include "student_database.h"

#define SIZE 10

int main(){
    student_database database[SIZE];
    
    /* Reading student database */
    printf("Enter the details of %u students:\n",SIZE);
    for(unsigned int i = 0; i < SIZE; ++i){
        read_data(database + i);
    }
    printf("\n");

    /* Displaying student databse */
    printf("Details of %u students are:\n",SIZE);
    for(unsigned int i = 0; i < SIZE; ++i){
        display_data(database + i);
    }

    /* Exit */
    return 0;
}

