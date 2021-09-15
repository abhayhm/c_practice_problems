/* Name: Abhay HM
 * Date: 15/09/2021
 * Info: Program to calculate the sum of series 1 + 11 + 111.... upto n. 
 */

#include <stdio.h>
#include <math.h>

/* Function to calculate sum of series */
unsigned int series_sum(unsigned int n){
    return ((pow(10, n + 1) - 10 - (9 * n)) / 81); 
}

int main(){
    unsigned int n = 0;
    
    /* Read input from user */
    printf("Enter the limit:");
    scanf("%u",&n);

    printf("Sum of series is: %u\n",series_sum(n));

    /* Exit */
    return 0;
}

