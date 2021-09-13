/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: This program is to check if the entered year is leap year. 
 */

#include <stdio.h>

int main(){
    int year = 0;
    
    /* Read input from user */
    printf("Enter the year:");
    scanf("%d",&year);

    /* Check for leap year */
    if((year % 4 == 0) && (year >= 0)){
        printf("%d is a leap year\n",year);
    }
    else if(year >= 0){
        printf("%d is not a leap year\n",year);
    }
    else{
        /* Invalid input */
        printf("Invalid input\n");
    }

    /* Exit */
    return 0;
}

