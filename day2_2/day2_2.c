/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to reverse of five digits of number.
 */

#include <stdio.h>

int main(){
    unsigned int number = 0, reverse = 0;
    
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
            reverse = reverse * 10;
            reverse += number % 10;
            number = number / 10;
        }
        printf("Reverse of number:%u\n",reverse);
    }

    /* Exit */
    return 0;
}

