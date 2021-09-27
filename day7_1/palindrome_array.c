#include <stdbool.h>
#include "array_operations.h"

/* Function to check if array is palindrome */
bool palindrome_array(int *array, unsigned int size){
    unsigned int i = 0, j = size - 1;
    while(i <= j){
        if(array[i] != array[j]){
            return false;
        }
        ++i; --j;
    }
    return true;
}
