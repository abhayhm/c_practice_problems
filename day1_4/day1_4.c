/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: Program to convert temperature from celsius to fahrenheit and reverse. 
 */

#include <stdio.h>
#include "temperature.h"

int main(){
    double temperature = 0;
    unsigned int choice = 0;

    /* Menu for user */
    printf("Choose from the below option:\n");
    printf("1) Fahrenheit to celsius\n");
    printf("2) Celsius to fahrenheit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    /* Convert fahrenheit to celsius */
    if(1 == choice){
        printf("Enter temperature in fahrenheit:");
        scanf("%lf",&temperature);
        printf("Temperature in celsius: %g\n",ftoc(temperature));
    }
    /* Convert celsius to fahrenheit */
    else if(2 == choice){
        printf("Enter temperature in celsius:");
        scanf("%lf",&temperature);
        printf("Temperature in fahrenheit: %g\n",ctof(temperature));
    }
    /* Invalid input */
    else{
        printf("Invalid choice\n");
    }

    /* Exit */
    return 0;
}

