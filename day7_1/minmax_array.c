#include "array_operations.h"

/* Function to find min and max in array */
void minmax_array(int *array, unsigned int size, evenodd_minmax *ptr){
    ptr->evensum_min = array[0];
    ptr->oddsum_max = array[0];

    for(unsigned int i = 1; i < size; ++i){
        if(array[i] < ptr->evensum_min){
            ptr->evensum_min = array[i];
        }
        if(array[i] > ptr->oddsum_max){
            ptr->oddsum_max = array[i];
        }
    }
}
