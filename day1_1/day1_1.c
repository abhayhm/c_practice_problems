/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: This program is to convert upper case character to lower case character.
 */

#include <stdio.h>

int main(){
    char alphabet = '\0';

    /* Read input from user */
    printf("Enter a character [A-Z]:");
    scanf("%c",&alphabet);

    /* Check for valid input */
    if(alphabet < 'Z' && alphabet > 'A'){
        /* Convert to lower case */
        alphabet = alphabet + 32;
        printf("After converting to lower case:%c\n",alphabet);
    }
    else{
        /* Invalid input */
        printf("Enter upper case characters[A-Z] only\n");
    }

    /* Exit */
    return 0;
}

