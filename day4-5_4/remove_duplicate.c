#include "sets.h"

/* Function to remove duplicates */
unsigned int remove_duplicate(int *array, unsigned int size){
    for(unsigned int i = 0; i < size - 1; ++i){
        for(unsigned int j = i + 1; j < size; ++j){
            if(array[i] == array[j]){
                for(unsigned int k = j; k < size - 1; ++k){
                    array[k]=array[k+1];
                }
                --size;
            }
        }
    }
    return size;
}
