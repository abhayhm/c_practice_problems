/* Name: Abhay HM
 * Date: 16/09/2021
 * Info: Program to generate sequence of a number (sum of previous three numbers). 
 */

#include <stdio.h>

int main(){
    unsigned int limit = 0, n1 = 0, n2 = 0, n3 = 1, sum = 0;

    /* Reading from user */
    printf("Enter number of iterations to print:");
    scanf("%u",&limit);

    /* For first 3 numbers */
    if(limit > 0){
        printf("Series: %u",n1);
    }
    if(limit > 1){
        printf(" %u",n2);
    }
    if(limit > 2){
        printf(" %u",n3);
    }

    /* Generating series */
    for(int i = 3; i < limit; ++i){
        sum = n3 + n2 + n1;
        n1 = n2;
        n2 = n3;
        n3 = sum;
        printf(" %u",sum);
    }

    printf("\n");

    /* Exit */
    return 0;
}

