/* Name: Abhay HM
 * Date: 27/09/2021
 * Info: Program to perform array operations. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "array_operations.h"

int main(){
    unsigned int size = 0;
    int element = 0;
    evenodd_minmax minmax = {0,0}, evenodd = {0,0};

    /* Read from user */
    printf("Enter the size of array:");
    scanf("%u",&size);

    int *array = (int *)calloc(size, sizeof(int));

    if(NULL == array){
        printf("Unable to create array\n");
        return 0;
    }

    /* Read array from user */
    read_array(array, size);

    /* Linear search */
    printf("Enter the search element:");
    scanf("%d",&element);
    element = search_array(array, size, element);
    if(-1 == element){
        printf("Element not found in array\n");
    }
    else{
        printf("Element found in array at position %u\n",element);
    }

    /* Minimum and maximum */
    minmax_array(array, size, &minmax);
    printf("Minimum of array: %d\n",minmax.evensum_min);
    printf("Maximum of array: %d\n",minmax.oddsum_max);

    /* Sum of all elements */
    printf("Sum of elements of array: %d\n",sum_array(array, size));

    /* Sum of even and odd elements */
    sum_evenodd_array(array, size, &evenodd);
    printf("Sum of even elements of array: %d\n",evenodd.evensum_min);
    printf("Sum of odd elements of array: %d\n",evenodd.oddsum_max);

    /* Palindrome */
    if(true == palindrome_array(array, size)){
        printf("Array is palindrome\n");
    }
    else{
        printf("Array is not palindrome\n");
    }

    /* Delete array */
    delete_array(array);

    /* Exit */
    return 0;
}

