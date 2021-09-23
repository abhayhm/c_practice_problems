#include <stdio.h>
#include "matrix.h"

/* Function to display contents of matrix */
void matrix_display(int **matrix, int rows, int columns){
    for(int i = 0; i < rows; ++i){
        if(i == 0){
            printf("[[");
        }
        else{
            printf(" [");
        }

        for(int j = 0; j < columns; ++j){
            printf("%d ",matrix[i][j]);
        }
        
        if(i == rows - 1){
            printf("\b]]");
        }
        else{
            printf("\b]");
        }

        printf("\n");
    }
}
