/* Name: Abhay HM
 * Date: 22/09/2021
 * Info: Program to search for given element in array using binary search. 
 */

#include <stdio.h>

#define SIZE 10

/* Function for swapping */
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Function for sorting elements */
void sort(int* array, int size){
    for(int i = 0; i < size ; ++i){
        for(int j = 0; j < size - 1; ++j){
            if(array[j] > array[j+1]){
                swap(array + j, array + j + 1);
            }
        }
    }
}

/* Function for binary search */
int binary_search(int *array, int start, int end, int element){
    int mid = start + ((end - start) / 2);

    if(array[mid] == element){
        return mid;
    }
    else if(start == end){
        return -1;
    }
    else if(element > array[mid]){
        return binary_search(array, mid + 1, end, element);
    }
    else{
        return binary_search(array, start, mid - 1, element);
    }
}

int main(){
    int array[SIZE] = {0}, position = 0, element = 0;

    /* Reading from user */
    printf("Enter 10 elements:");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d",&array[i]);
    }
    
    printf("Enter the search element:");
    scanf("%d",&element);

    /* Sorting elements */
    sort(array, SIZE);

    /* Searching given element */
    position = binary_search(array, 0, SIZE - 1, element);

    /* Info for user */
    if(-1 == position){
        printf("Element not found\n");
    }
    else{
        printf("Element found at position: %d\n",position);
    }

    /* Exit */
    return 0;
}

