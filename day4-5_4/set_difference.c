#include <stdio.h>
#include "sets.h"

/* Function for calculatin set difference */
void set_difference(int *set1, int *set2, unsigned int size1, unsigned int size2){
    int difference_set[(size1 > size2) ? size1:size2];
    int flag = 0, difference_set_size = 0;

    /* Calculate set1 - set2 */
    for(unsigned int i = 0; i < size1; ++i){
        flag = 0;
        for(unsigned int j = 0; j < size2; ++j){
            if(set1[i] == set2[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            difference_set[difference_set_size++] = set1[i];
        }
    }

    printf("Set1 - Set2:");
    for(unsigned int i = 0; i < difference_set_size; ++i){
        printf(" %d",difference_set[i]);
    }
    printf("\n");
    
    difference_set_size = 0;

    /* Calculate set2 - set1 */
    for(unsigned int i = 0; i < size2; ++i){
        flag = 0;
        for(unsigned int j = 0; j < size1; ++j){
            if(set2[i] == set1[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            difference_set[difference_set_size++] = set2[i];
        }
    }

    printf("Set2 - Set1:");
    for(unsigned int i = 0; i < difference_set_size; ++i){
        printf(" %d",difference_set[i]);
    }
    printf("\n");
}

