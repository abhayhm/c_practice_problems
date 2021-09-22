/* Name: Abhay HM
 * Date: 22/09/2021
 * Info: Program to find min and max using function.
 */

#include <stdio.h>
#include "minmax.h"

#define SIZE 10

int main(){
    minmax minmax_struct = {0, 0};
    int array[SIZE] = {51, 3, 36, 98, -85, 84, 0, 64, 3, 10};
    
    /* Infor for user */
    printf("Array:");
    for(int i = 0; i < SIZE; ++i){
        printf(" %d", array[i]);
    }
    printf("\n");

    /*Find min and max */
    find_min_max(array, SIZE, &(minmax_struct.min), &(minmax_struct.max));

    /* Info for user */
    printf("Min: %3d\n",minmax_struct.min);
    printf("Max: %3d\n",minmax_struct.max);

    /* Exit */
    return 0;
}

