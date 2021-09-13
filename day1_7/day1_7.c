/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: This program is to calculate 2^N using left shift operator. 
 */

#include <stdio.h>

int main(){
    unsigned short power = 0;

    /* Read input from user */
    printf("Enter the power[0-31]:");
    scanf("%hd",&power);

    /* Check id power is in range */
    if(power >= 0 && power <= 31){
        /* Calculate 2^N */
        printf("2^%hd = %u\n", power, (1U << power));
    }
    else{
        printf("Power is out of range[0-31]\n");
    }

    /* Exit */
    return 0;
}

