/* Name: Abhay HM
 * Date: 22/09/2021
 * Info: Program to search for given element in array using linear search. 
 */

#include <stdio.h>

#define SIZE 10

/* Function for linear search */
int linear_search(int *array, int size, int element){
    for(int i = 0; i < size; ++i){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[SIZE] = {0}, position = 0, element = 0;

    /* Reading from user */
    printf("Enter 10 elements:");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d",&array[i]);
    }
    
    printf("Enter the search element:");
    scanf("%d",&element);

    /* Searching given element */
    position = linear_search(array, SIZE, element);

    /* Info for user */
    if(-1 == position){
        printf("Element not found\n");
    }
    else{
        printf("Element found at position: %d\n",position);
    }

    /* Exit */
    return 0;
}

