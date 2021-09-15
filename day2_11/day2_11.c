/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to calculate electricity bill. 
 */


#include <stdio.h>

int main(){

    unsigned int units = 0;
    double charge_amount = 0;

    /* Read units */
    printf("Enter number of units consumed:");
    scanf("%d",&units);

    /* Calculate charge amount */
    if(units > 300){
        charge_amount = charge_amount + ((units - 300) * 2);
        units = 300;
    }
    if(units > 200){
        charge_amount = charge_amount + ((units - 200) * 1.5);
        units = 200;
    }
    if(units > 0){
        charge_amount = charge_amount + (units * 1);
        units = 0;
    }

    printf("Total charge amount: %g\n",charge_amount);
        
    /* Exit */
    return 0;
}
