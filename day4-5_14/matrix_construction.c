#include "matrix.h"

/* Function for matrix construction */
int **matrix_construction(int rows, int columns){
    int **matrix = NULL;

    matrix = (int **)calloc(rows, sizeof(int *));

    if(NULL != matrix){
        for(int i = 0; i < rows; ++i){
            *(matrix + i) = (int *)calloc(columns, sizeof(int));

            if(*(matrix + i) == NULL){
                return NULL;
            }
        }
    }
    return matrix;
}
