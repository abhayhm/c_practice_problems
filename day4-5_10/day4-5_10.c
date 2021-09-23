/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to read date from user and display in worded format. 
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

/* Function to validate date */
bool validate_date(unsigned int,unsigned int, unsigned int);

/* Function for converting date into word format */
char *word_format_date(unsigned int, unsigned int, unsigned int);

int main(){
    unsigned int day = 0, month = 0, year = 0;
	char *word_format = NULL;

    /* Reading from the user */
    printf("Enter day:");
    scanf("%u",&day);

    printf("Enter month:");
    scanf("%u",&month);

    printf("Enter year:");
    scanf("%u",&year);
    
    /* Converting date to word format */
    word_format = word_format_date(day, month, year);
	printf("%s\n",word_format);
    free(word_format);
	
    /* Exit */
    return 0;
}

/* Function to validate date */
bool validate_date(unsigned int day, unsigned int month, unsigned int year){
    
#define DAYS_31_LEN 7
#define DAYS_30_LEN 4

    /* Months having 30 days */
    int days_30[DAYS_30_LEN] = {4, 6, 9, 11};

    /* Invalid days or month */
    if(day > 31 || month > 12){
        return false;
    }

    /* Leap year validation*/
    if((year % 4 == 0) && (2 == month) && (day > 29)){
        return false;
    }
    /* Non leap year validation */
    else if((year % 4 != 0) && (2 == month) && (day > 28)){
        return false;
    }

    /* Invalid days in a month */
    for(int i = 0; i < DAYS_30_LEN; ++i){
        if((days_30[i] == month) && (day > 30)){
            return false;
        }
    }

#undef DAYS_31_LEN
#undef DAYS_30_LEN
    
    /* Validation successful */
    return true;
}

/* Function for converting date into word format */
char *word_format_date(unsigned int day, unsigned int month, unsigned int year){
    char *date = (char *)calloc(21, sizeof(char));

    /* If memory allocation fails */
    if(NULL == date){
        return "Failed to allocate memory";
    }

    if(true == validate_date(day, month, year)){
        /* Switch case for day */
        switch(((day > 10) && (day < 14))?4:(day % 10)){
            case 1:{
                        char temp[6] = {0};
                        sprintf(temp,"%dst ",day);
                        strcat(date,temp);
                   }break;
            
            case 2:{
                        char temp[6] = {0};
                        sprintf(temp,"%dnd ",day);
                        strcat(date,temp);
                   }break;
            
            case 3:{
                        char temp[6] = {0};
                        sprintf(temp,"%drd ",day);
                        strcat(date,temp);
                   }break;
            
            default:{
                        char temp[6] = {0};
                        sprintf(temp,"%dth ",day);
                        strcat(date,temp);
                   }break;
        }

        /* Switch case for month */
        switch(month){
            case 1:{
                        strcat(date,"January, ");
                   }break;
            case 2:{
                        strcat(date,"February, ");
                   }break;
            case 3:{
                        strcat(date,"March, ");
                   }break;
            case 4:{
                        strcat(date,"April, ");
                   }break;
            case 5:{
                        strcat(date,"May, ");
                   }break;
            case 6:{
                        strcat(date,"June, ");
                   }break;
            case 7:{
                        strcat(date,"July, ");
                   }break;
            case 8:{
                        strcat(date,"August, ");
                   }break;
            case 9:{
                        strcat(date,"September, ");
                   }break;
            case 10:{
                        strcat(date,"October, ");
                   }break;
            case 11:{
                        strcat(date,"November, ");
                   }break;
            case 12:{
                        strcat(date,"December, ");
                   }break;
        }

        /* Adding year */
        char temp[5] = {0};
        sprintf(temp,"%u",year);
        strcat(date, temp);
        
        return date;
    }
    /* Invalid date */
    else{
       return "Invalid date";
    } 
}
