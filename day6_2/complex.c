#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

/* Function for addition of two complex numbers */
complex_no *add_complex(complex_no *a, complex_no *b){
    complex_no *result = (complex_no *)calloc(1, sizeof(complex_no));

    if(NULL == result){
        return NULL;
    }

    result->real_part = a->real_part + b->real_part;
    result->imaginary_part = a->imaginary_part + b->imaginary_part;

    return result;
}

/* Function for subtraction of two complex numbers */
complex_no *subtract_complex(complex_no *a, complex_no *b){
    complex_no *result = (complex_no *)calloc(1, sizeof(complex_no));

    if(NULL == result){
        return NULL;
    }

    result->real_part = a->real_part - b->real_part;
    result->imaginary_part = a->imaginary_part - b->imaginary_part;

    return result;
}

/* Function for multiplication of two complex numbers */
complex_no *multiply_complex(complex_no *a, complex_no *b){
    complex_no *result = (complex_no *)calloc(1, sizeof(complex_no));

    if(NULL == result){
        return NULL;
    }

    result->real_part = a->real_part * b->real_part;
    result->imaginary_part = (a->imaginary_part * b->imaginary_part) * (-1);
    result->real_part = result->real_part + result->imaginary_part;

    result->imaginary_part = (a->real_part * b->imaginary_part) + (a->imaginary_part * b->real_part);

    return result;
}

/* Function for reading complex number */
void read_complex(complex_no *ptr){
    printf("Enter the real part of complex number:");
    scanf("%d",&(ptr->real_part));

    printf("Enter the imaginary part of complex number:");
    scanf("%d",&(ptr->imaginary_part));
}

/* Function for printing complex number */
void display_complex(complex_no *ptr){
    if(ptr->imaginary_part >= 0){
        printf("%d+%di",ptr->real_part,ptr->imaginary_part);
    }
    else{
        printf("%d%di",ptr->real_part,ptr->imaginary_part);
    }
}
