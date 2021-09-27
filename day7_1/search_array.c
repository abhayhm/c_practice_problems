#include "array_operations.h"

/* Function search element in array */
unsigned int search_array(int *array, unsigned int size, int element){
    for(unsigned int i = 0; i < size; ++i){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
