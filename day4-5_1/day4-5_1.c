/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to sort array in ascending and descending order. 
 */

#include <stdio.h>

#define SIZE 10

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_a(int* array, int n){
    for(int i = 0; i < n ; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(array[j] > array[j+1]){
                swap(array + j, array + j + 1);
            }
        }
    }
}

void sort_d(int* array, int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(array[j] < array[j+1]){
                swap(array + j, array + j + 1);
            }
        }
    }
}

int main(){
    int array[SIZE] = {5, 6 , 85, 68, 8, 0, -89, 94, 6, 10};
    
    /* Sorting asscending */
    sort_a(array, SIZE);
    printf("After sorting array in ascending order:");
    for(int i = 0; i < SIZE; ++i){
        printf(" %d",array[i]);
    }
    printf("\n");

    /* Sorting descending */
    sort_d(array, SIZE);
    printf("After sorting array in descending order:");
    for(int i = 0; i < SIZE; ++i){
        printf(" %d",array[i]);
    }
    printf("\n");

    /* Exit */
    return 0;
}

