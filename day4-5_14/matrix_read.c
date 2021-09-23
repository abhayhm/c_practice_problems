#include <stdio.h>
#include "matrix.h"
    
/* Function to read values for matrix */
void matrix_read(int **matrix, int rows, int columns){
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < columns; ++j){
            printf("Row [%d] Column [%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
