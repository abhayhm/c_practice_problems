/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: This program is to check if the entered number is even or odd. 
 */

#include <stdio.h>

int main(){
    int number = 0;
    
    /* Read the input from the user */
    printf("Enter the number:");
    scanf("%d", &number);

    /* Check for evenness of number */
    if(number % 2 == 0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }

    /* Exit */
    return 0;
}

