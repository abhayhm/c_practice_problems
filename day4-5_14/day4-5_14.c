/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to construct and add two matrices. 
 */

#include <stdio.h>
#include "matrix.h"

int main(){
    int **matrix1 = NULL, **matrix2 = NULL, **matrix_total = NULL;
    int rows = 0, columns = 0;

    /* Reading from user */
    printf("Enter the number of rows of matrix:");
    scanf("%d",&rows);

    printf("Enter the number of column of matrix:");
    scanf("%d",&columns);

    /* Construct matrix */
    matrix1 = matrix_construction(rows, columns);
    matrix2 = matrix_construction(rows, columns);
    matrix_total = matrix_construction(rows, columns);

    /* If construction failed */
    if(NULL == matrix1 || NULL == matrix2 || NULL == matrix_total){
        printf("Matrix construction failed\n");
        return 0;
    }
    
    /* Reading values to matrix1 */
    printf("Enter the values for matrix1:\n");
    matrix_read(matrix1, rows, columns);

    /* Reading values to matrix2 */
    printf("Enter the values for matrix2:\n");
    matrix_read(matrix2, rows, columns);

    /* Constructed matrix1 */
    printf("Constructed matrix:\n");
    matrix_display(matrix1, rows, columns);
    
    /* Constructed matrix2 */
    printf("Constructed matrix:\n");
    matrix_display(matrix2, rows, columns);

    /* Adding two matrices */
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < columns; ++j){
            matrix_total[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    /* Addition of matrix */
    printf("Matrix addition:\n");
    matrix_display(matrix_total, rows, columns);

    /* Exit */
    return 0;
}

