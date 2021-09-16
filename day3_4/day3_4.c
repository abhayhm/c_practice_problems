/* Name: Abhay HM
 * Date: 16/09/2021
 * Info: Program to generate series of two digit numbers whose sum is 7. 
 */

#include <stdio.h>

int main(){
    /* Read input from user */
    printf("Series of two digit numbers whose sum is 7 are:");

    /* Generate series */
    for(int i = 1; i <= 7; ++i){
        printf("%d%d ",i, 7-i);
    }
    printf("\n");

    /* Exit */
    return 0;
}

