#ifndef __MINMAX_H__
#define __MINMAX_H__

/* Structure for returning */
typedef struct{
    int min;
    int max;
}minmax;

/* Function for min and max */
int find_min_max(int *, int, int *, int *);

#endif
