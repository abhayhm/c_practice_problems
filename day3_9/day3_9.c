/* Name: Abhay HM
 * Date: 16/09/2021
 * Info: Program to find square of number using macros. 
 */

#include <stdio.h>

#define SQUARE(number) (number * number)

int main(){
    int number = 0;

    printf("Enter the number:");
    scanf("%d",&number);

    printf("Square of %d is: %d\n",number, SQUARE(number));

    /* Exit */
    return 0;
}

