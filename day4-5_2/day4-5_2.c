/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to swap two numbers using function. 
 */

#include <stdio.h>

/* Function to swap two numbers */
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1 = 0, n2 = 0;

    /* Reading from user */
    printf("Enter number1:");
    scanf("%d",&n1);

    printf("Enter number2:");
    scanf("%d",&n2);

    /* Swapping */
    swap(&n1, &n2);

    /* Info for user */
    printf("After swapping:\n");
    printf("Number1: %d\n",n1);
    printf("Number2: %d\n",n2);
    
    /* Exit */
    return 0;
}

