/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: This program is to find the area of the circle.
 */

#include <stdio.h>

int main(){
    float radius = 0;

    /* Read input from user */
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    /* Check for valid radius */
    if(radius >= 0){
        /* Print area of circle */
        printf("Area of the circle: %g\n", 3.14 * radius * radius);
    }
    else{
        /* Invalid input */
        printf("Invalid radius input\n");
    }
        
    /* Exit */
    return 0;
}

