/* Name: Abhay HM
 * Date: 23/09/2021
 * Info: Program to construct and display contents of matrix. 
 */

#include <stdio.h>
#include "matrix.h"

#define ROWS 5
#define COLUMNS 5

int main(){
    int **matrix = NULL;

    /* Construct matrix */
    matrix = matrix_construction(ROWS, COLUMNS);

    /* If construction failed */
    if(NULL == matrix){
        printf("Matrix construction failed\n");
        return 0;
    }
    
    /* Reading values to matrix */
    printf("Enter the values for 5*5 matrix:\n");
    matrix_read(matrix, ROWS, COLUMNS);

    /* Constructed matrix */
    printf("Constructed matrix:\n");
    matrix_display(matrix, ROWS, COLUMNS);

    /* Exit */
    return 0;
}

