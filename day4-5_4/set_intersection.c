#include <stdio.h>
#include "sets.h"

/* Function for set intersection */
void set_intersection(int *set1, int *set2, unsigned int size1, unsigned int size2){
    int intersection_set[(size1 < size2) ? size1:size2];
    unsigned int size = 0, k = 0;

    /* Create raw union set */
    for(unsigned int i = 0; i < size1; ++i){
        for(unsigned int j = 0; j < size2; ++j){
            if(set1[i] == set2[j]){
                intersection_set[k++] = set1[i];
            }
        }
    }

    /* Remove duplicate */
    size = remove_duplicate(intersection_set, (size1 < size2) ? size1:size2);
    
    /* Print intersection set */
    printf("Intersection set:");
    for(unsigned int i = 0; i < size; ++i){
        printf(" %d",intersection_set[i]);
    }
    printf("\n");
}

