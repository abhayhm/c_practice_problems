#include <stdio.h>
#include "sets.h"

/* Function for set union */
void set_union(int *set1, int *set2, unsigned int size1, unsigned int size2){
    int union_set[size1 + size2];
    unsigned int size = 0;

    /* Create raw union set */
    for(unsigned int i = 0; i < size1; ++i){
        union_set[i] = set1[i];
    }
    for(unsigned int i = size1; i < size1 + size2; ++i){
        union_set[i] = set2[i - size1];
    }

    /* Remove duplicate */
    size = remove_duplicate(union_set, size1 + size2);
    
    /* Print uynion set */
    printf("Union set:");
    for(unsigned int i = 0; i < size; ++i){
        printf(" %d",union_set[i]);
    }
    printf("\n");
}

