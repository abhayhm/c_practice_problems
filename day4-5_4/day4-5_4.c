/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to calculate set union, intersection and difference. 
 */

#include <stdio.h>
#include "sets.h"

int main(){
    unsigned int size1 = 0, size2 = 0;

    /* Read set1 */
    printf("Enter size of set1:");
    scanf("%u",&size1);

    int set1[size1];
    printf("Enter elements of set1:");
    for(int i = 0; i < size1; ++i){
        scanf("%d",&set1[i]);
    }

    /* Read set2 */ 
    printf("Enter size of set2:");
    scanf("%u",&size2);

    int set2[size2];
    printf("Enter elements of set2:");
    for(int i = 0; i < size2; ++i){
        scanf("%d",&set2[i]);
    }
    
    printf("\n");
    /* Calling set functions */
    set_union(set1, set2, size1, size2);
    set_intersection(set1, set2, size1, size2);
    set_difference(set1, set2, size1, size2);

    /* Exit */
    return 0;
}

