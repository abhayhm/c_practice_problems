/* Name: Abhay HM
 * Date: 15/09/2021
 * Info: Program to check if given numbers are amicable.
 */

#include <stdio.h>
#include <stdbool.h>

/* Function to check if number is amicable */
bool amicable(unsigned int n1, unsigned int n2){
    unsigned int temp_n = 0;

    for(unsigned int i = 1; i <= n1 / 2; ++i){
        if(n1 % i == 0){
            temp_n = temp_n + i;
        }

        if(temp_n > n2){
            return false;
        }
    }

    if(temp_n < n2){
        return false;
    }

    temp_n = 0;

    for(unsigned int i = 1; i <= n2 / 2; ++i){
        if(n2 % i == 0){
            temp_n = temp_n + i;
        }

        if(temp_n > n1){
            return false;
        }
    }

    if(temp_n < n1){
        return false;
    }

    return true;
}

int main(){

    unsigned int number1 = 0, number2 = 0;

    /* Read numbers from user */
    printf("Enter the first number:");
    scanf("%u",&number1);

    printf("Enter the second number:");
    scanf("%u",&number2);

    /* Check if numbers are amicable */
    if(amicable(number1, number2) == true){
        printf("Given pair numbers are amicable\n");
    }
    else{
        printf("Given pair numbers are not amicable\n");
    }

    /* Exit */
    return 0;
}

