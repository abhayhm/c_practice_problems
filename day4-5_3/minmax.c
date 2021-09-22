#include "minmax.h"

/* Function for min and max */
int find_min_max(int *array, int size, int *min, int *max){
    *min = array[0];
    *max = array[0];

    for(int i = 1;i < size; ++i){
        if(*min > array[i]){
            *min = array[i];
        }
        if(*max < array[i]){
            *max = array[i];
        }
    }

    return 1;
}
