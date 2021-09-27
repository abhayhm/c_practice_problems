#ifndef __ARRAYOPERATIONS_H__
#define __ARRAYOPERATIONS_H__

#include <stdbool.h>

/* Structure for even and odd sum */
typedef struct{
    int evensum_min;
    int oddsum_max;
}evenodd_minmax;

/* Function declaration */
void read_array(int *, unsigned int);
unsigned int search_array(int *, unsigned int, int);
void minmax_array(int *, unsigned int, evenodd_minmax *);
int sum_array(int *, unsigned int);
void sum_evenodd_array(int *, unsigned int, evenodd_minmax *);
bool palindrome_array(int *, unsigned int);
void delete_array(int *);

#endif
