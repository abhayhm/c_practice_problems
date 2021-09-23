/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to construct and display contents of matrix. 
 */

#include <stdio.h>
#include "matrix.h"

int main(){
    int **matrix = NULL;
    int rows = 0, columns = 0;

    /* Reading from user */
    printf("Enter the number of rows of matrix:");
    scanf("%d",&rows);

    printf("Enter the number of column of matrix:");
    scanf("%d",&columns);

    /* Construct matrix */
    matrix = matrix_construction(rows, columns);

    /* If construction failed */
    if(NULL == matrix){
        printf("Matrix construction failed\n");
        return 0;
    }
    
    /* Reading values to matrix */
    printf("Enter the values for matrix:\n");
    matrix_read(matrix, rows, columns);

    /* Constructed matrix */
    printf("Constructed matrix:\n");
    matrix_display(matrix, rows, columns);

    /* Exit */
    return 0;
}

