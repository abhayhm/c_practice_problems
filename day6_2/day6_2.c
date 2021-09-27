/* Name: Abhay HM
 * Date: 26/09/2021
 * Info: Program to add, subtract and multiple two complex numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main(){
    /* Create 2 complex space */
    complex_no *result = NULL;
    complex_no *a = (complex_no *)calloc(1, sizeof(complex_no));
    complex_no *b = (complex_no *)calloc(1, sizeof(complex_no));

    /* Failed memory allocation */
    if(NULL == a || NULL == b){
        printf("Failed to create complex number\n");
        return 0;
    }

    /* Reading complex number */
    printf("Enter the first complex number:\n");
    read_complex(a);
    printf("Enter the second complex number:\n");
    read_complex(b);
    printf("\n");

    /* Adding two complex number */
    printf("("); display_complex(a); printf(")");
    printf(" + ");
    printf("("); display_complex(b); printf(")");
    printf(" = ");
    result = add_complex(a,b);
    printf("("); display_complex(result); printf(")");
    printf("\n"); free(result);

    /* Subtracting two complex number */
    printf("("); display_complex(a); printf(")");
    printf(" - ");
    printf("("); display_complex(b); printf(")");
    printf(" = ");
    result = subtract_complex(a,b);
    printf("("); display_complex(result); printf(")");
    printf("\n"); free(result);
    
    /* Multiplying two complex number */
    printf("("); display_complex(a); printf(")");
    printf(" * ");
    printf("("); display_complex(b); printf(")");
    printf(" = ");
    result = multiply_complex(a,b);
    printf("("); display_complex(result); printf(")");
    printf("\n"); free(result);
    
    /* Exit */
    return 0;
}

