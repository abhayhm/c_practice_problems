/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to find sum of five digits of number.
 */

#include <stdio.h>

int main(){
    unsigned int number = 0, sum = 0;
    
    /* Read input from user */
    printf("Enter the five digit number:");
    scanf("%u",&number);

    /* Check for valid input */
    if(number < 9999 || number > 99999){
        printf("Invalid number\n");
    }
    /* Find the sum */
    else{
        for(int i = 0; i < 5; ++i){
            sum += number % 10;
            number = number / 10;
        }
        printf("Sum of five digites:%u\n",sum);
    }

    /* Exit */
    return 0;
}

