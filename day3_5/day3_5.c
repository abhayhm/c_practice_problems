/* Name: Abhay HM
 * Date: 16/09/2021
 * Info: Program to calculate power of number using recursion. 
 */

#include <stdio.h>

/* Function for calculating power using recursion */
unsigned int power(unsigned int base, unsigned int exponent){
    if(1 == exponent){
        return base;
    }

    return base * power(base, exponent - 1);
}

int main(){
    unsigned int base = 0, exponent = 0;

    /* Reading input from user */
    printf("Enter base:");
    scanf("%u",&base);

    printf("Enter exponent:");
    scanf("%u",&exponent);

    printf("%u ^ %u is: %u\n",base, exponent, power(base, exponent));
  
    /* Exit */
    return 0;
}

