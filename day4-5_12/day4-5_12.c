/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to reverse the enterd string. 
 */

#include <stdio.h>

#define SIZE 500

/* Function for swapping a byte */
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b =temp;
}

/* Function to reverse string */
char *strreverse(char *str){
    char *base = str;
    char *backup = str;

    while(*str++ != '\0');
    --str; --str;

    while(str > base){
        swap(base++, str--);
    }
    
    return backup;
}

int main(){
    char str[SIZE] = {0};

    /* Read from user */
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    /* Reversing string */
    printf("Reverse of the string:%s\n",strreverse(str));

    /* Exit */
    return 0;
}

