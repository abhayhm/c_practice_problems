/* Name: Abhay HM
 * Date: 15/09/2021
 * Info: Program to convert binary to decimal and vice versa. 
 */

#include <stdio.h>
#include <string.h>

/* Function for converting decimal to binary */
void print_binary(int number){
    for(int i = 31; i >= 0; --i){
        if(number & (1 << i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}

/* Function for converting binary to decimal */
void print_decimal(char *number){
    int number_int = 0;
    unsigned int len = strlen(number);
    
    for(int i = 0; i < len; ++i){
        if((number[i] == '1') && (number[i] != '-')){
            number_int = number_int | (1 << (len - i - 1));           
        }
    }    
    
    if(number[0] == '-'){
        number_int = (~number_int) + 1;
    }
    
    printf("%d\n",number_int);    
}

int main(){
    unsigned char binary[32] = {0};
    unsigned int choice = 0;
    int decimal = 0;

    /* Menu for the user */
    printf("List of conversions available:\n");
    printf("1) Decimal to binary\n");
    printf("2) Binary to decimal\n");
    printf("Enter your choice:");
    scanf("%u",&choice);

    /* Case for conversions */
    switch(choice){
        case 1:{
                   printf("Enter the decimal number:");
                   scanf("%d",&decimal);
                   printf("Number in binary is:");
                   print_binary(decimal);
               }break;

        case 2:{
                   printf("Enter the binary number:");
                   scanf("%s",binary);
                   printf("Number in decimal is:");
                   print_decimal(binary);
               }break;

        default :{
                     printf("Invalid choice\n");
                 }

    }

    /* Exit */
    return 0;
}

