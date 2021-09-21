/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to find factorial of number using recursion
 */

#include <stdio.h>

/* Recursive function to calculate factorial */
unsigned int factorial(int number){
    if(0 == number){
        return 1;
    }

    return number * factorial(number - 1);
}

int main(){
    unsigned int number = 0;
    
    /* Read from user */
    printf("Enter the number:");
    scanf("%u",&number);

    /* Info for user */
    printf("Factorial of number is: %u\n",factorial(number));

    /* Exit */
    return 0;
}

