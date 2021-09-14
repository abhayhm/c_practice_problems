/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to check if given number is armstrong number.
 */

#include <stdio.h>

int main(){
    int number = 0;
    unsigned int number_duplicate = 0, number_copy = 0;
    
    /* Read input from user */
    printf("Enter the number:");
    scanf("%u",&number);

    /* If number is negative */
    if(number < 0){
        number = (~number) + 1;
    }

    number_copy = number;

    /* Find the occurance */
    while(0 != number){
        number_duplicate = number_duplicate + ((number % 10) * (number % 10) * (number % 10));
        number = number / 10;
    }
    
    /* Info for user */
    if(number_copy == number_duplicate){
        printf("Number is armstrong\n");
    }
    else{
        printf("Number is not armstrong\n");
    }

    /* Exit */
    return 0;
}

