/* Name: Abhay HM
 * Date: 16/09/2021
 * Info: Program to generate a pattern.
 */

#include <stdio.h>

int main(){
    unsigned int n = 0;
    
    /* Read input from user */
    printf("Enter number of lines:");
    scanf("%u",&n);

    /* Generate pattern */
    for(int i = n; i > 0; --i){
        for(int j = 0 ; j < n - i; ++j){
            printf("  ");
        }
        for(int j = 0; j < i; ++j){
            printf("* ");
        }
        printf("\n");
    }

    /* Exit */
    return 0;
}

