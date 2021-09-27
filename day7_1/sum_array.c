#include "array_operations.h"

/* Function to find sum of an array */
int sum_array(int *array, unsigned int size){
    int sum = 0;
    for(unsigned int i = 0; i < size; ++i){
        sum = sum + array[i];
    }
    return sum;
}
