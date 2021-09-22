/* Name: Abhay HM
 * Date: 22/09/2021
 * Info: Program to print sum of product of consecutive numbers. 
 */

#include <stdio.h>

#define SIZE 10

int find_consecutive_sum(int *array, int size){
    int total = 0;
    for(int i = 0; i < size - 1; ++i){
        total += (array[i] * array[i+1]);
    }
    return total;
}

int main(){
    int array[SIZE] = {0}, no_elements = 0;
    
    /* Reading from user */
    printf("Enter the number of elements for array of size %d:",SIZE);
    scanf("%d",&no_elements);

    printf("Enter %d elements:",no_elements);
    for(int i = 0; i < no_elements; ++i){
        scanf("%d",&array[i]);
    }
    
    /* Finding consecutive sum */    
    printf("Sum of consecutive elements of array is: %d\n",find_consecutive_sum(array, no_elements));

    /* Exit */
    return 0;
}

