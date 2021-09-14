/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to check if entered number is palindrome. 
 */

#include <stdio.h>

int main(){
    int number = 0, number_copy = 0, number_reverse = 0;

    /* Read number from user */
    printf("Enter the number:");
    scanf("%d",&number);

    /* If number is negative */
    if(number < 0){
        number = (~number) + 1;
    }

    number_copy = number;

    /* Reverse the digits of number */
    while(number != 0){
        number_reverse = number_reverse * 10;
        number_reverse += number % 10;
        number = number / 10;
    }

    /* Palindrome */
    if(number_copy == number_reverse){
        printf("Entered number is palindrome\n");
    }
    else{
        printf("Entered number is not palindrome\n");
    }

    /* Exit */
    return 0;
}

