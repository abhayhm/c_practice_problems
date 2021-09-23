/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to find length of the string without using string.h. 
 */

#include <stdio.h>

#define SIZE 500

/* Function to find the length of string */
long strlen(char *str){
    long length = 0;
    while(*str++ != '\0' && ++length);

    return length;
}

int main(){
    char str[SIZE] = {0};

    /* Read from user */
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    /* Find length of string */
    printf("Length of the string is: %ld\n",strlen(str));

    /* Exit */
    return 0;
}

