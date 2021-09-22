/* Name: Abhay HM
 * Date: 22/09/2021
 * Info: Program to remove duplicate elements in array. 
 */

#include <stdio.h>

#define SIZE 10

/* Function to remove duplicates */
int remove_duplicate(int *array, int size){
    for(int i = 0; i < size - 1; ++i){
        for(int j = i + 1; j < size; ++j){
            if(array[i] == array[j]){
                for(int k = j; k < size - 1; ++k){
                    array[k]=array[k+1];
                }
                --size;
            }
        }
    }
    return size;
}

int main(){
    int array[SIZE] = {0}, size = SIZE;

    /* Reading from user */
    printf("Enter 10 elements:");
    for(int i = 0; i < size; ++i){
        scanf("%d",&array[i]);
    }

    /* Remove duplicate */
    size = remove_duplicate(array, size);

    /* Info for user */
    printf("Array after removing duplicates:");
    for(int i = 0; i < size; ++i){
        printf(" %d",array[i]);
    }
    printf("\n");

    /* Exit */
    return 0;
}

