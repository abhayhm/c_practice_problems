/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to conver all lower case alphabets of string to upper case.
 */

#include <stdio.h>

#define SIZE 500

char *strupper(char *str){
    char *base = str;

    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        ++str;
    }

    return base;
}

int main(){
    char str[SIZE] = {0};

    /* Reading from the user */
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    /* Converting to upper case */
    printf("After converting to uppercase: %s\n",strupper(str));

    /* Exit */
    return 0;
}

