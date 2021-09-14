/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to find occurance of a digit in number.
 */

#include <stdio.h>

int main(){
    int number = 0;
    unsigned int count = 0, digit = 0;
    
    /* Read input from user */
    printf("Enter the number:");
    scanf("%u",&number);

    printf("Enter the digit:");
    scanf("%u",&digit);

    /* If number is negative */
    if(number < 0){
        number = (~number) + 1;
    }

    /* Find the occurance */
    while(0 != number){
        if(number % 10 == digit){
            ++count;
        }
        number = number / 10;
    }
    
    printf("Number of occurance of digit %u is:%u\n",digit, count);

    /* Exit */
    return 0;
}

