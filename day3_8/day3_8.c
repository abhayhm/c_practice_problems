/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to concatenate two integer values using macros. 
 */

#include <stdio.h>

/* Macro for concatenation of two integers */
#define CONCATENATE(N1,N2) N1##N2

int main(){

    /* Info for user */
    printf("After concartenating two integers 32 and 45: %d\n",CONCATENATE(32,45));

    /* Exit */
    return 0;
}

