#include "array_operations.h"

/* Function to find sum of an array */
void sum_evenodd_array(int *array, unsigned int size, evenodd_minmax *ptr){
    ptr->evensum_min = 0;
    ptr->oddsum_max = 0;

    for(unsigned int i = 0; i < size; ++i){
        if(array[i] % 2 == 0){
             ptr->evensum_min =  ptr->evensum_min + array[i];
        }
        else{
            ptr->oddsum_max = ptr->oddsum_max + array[i];
        }
    }
}
