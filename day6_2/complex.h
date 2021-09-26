#ifndef __COMPLEX_H__
#define __COMPLEX_H__

/* Structure for complex number */
typedef struct complex_number{
    int real_part;
    int imaginary_part;
}complex_no;

/* Function declaration */
complex_no *add_complex(complex_no *, complex_no *);
complex_no *subtract_complex(complex_no *, complex_no *);
complex_no *multiply_complex(complex_no *, complex_no *);
void read_complex(complex_no *);
void display_complex(complex_no *);

#endif
