#include <stdio.h>
#include "array_operations.h"

/* Function declaration */
void read_array(int *array, unsigned int size){
    printf("Enter the elements of the array:");
    for(unsigned int i = 0; i < size; ++i){
        scanf("%d",&array[i]);
    }
}
