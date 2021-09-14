/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to find sum difference and product, menu driven. 
 */

#include <stdio.h>

/* Function for sum */
int sum(int x, int y){
    return x+y;
}

/* Function for difference */
int difference(int x, int y){
    return x-y;
}

/* Function for product */
int product(int x, int y){
    return x*y;
}

int main(){
    int operand1 = 0, operand2 = 0, choice = 0;
    
    printf("Enter the value for operand 1:");
    scanf("%d",&operand1);

    printf("Enter the value for operand 2:");
    scanf("%d",&operand2);
    
    /* Menu for the user */
    printf("List of available operations:\n");
    printf("1) Sum\n");
    printf("2) Difference\n");
    printf("3) Product\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    /* Case for selected operation */
    switch(choice){
        case 1:{
                   printf("Sum is: %d\n",sum(operand1, operand2));
               }break;
        case 2:{
                   printf("Difference is: %d\n",difference(operand1, operand2));
               }break;
        case 3:{
                   printf("Product is: %d\n",product(operand1, operand2));
               }break;
        default:{
                   printf("Invalid input\n");
               }break;
    }
    
    /* Exit */
    return 0;
}

