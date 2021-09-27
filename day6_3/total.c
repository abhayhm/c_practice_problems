#include "billing.h" 

/* Function for calculating total */
unsigned int total(item **cart, unsigned int size){
    unsigned int total = 0;

    /* Calculate total price */
    for(unsigned int i = 0; i < size; ++i){
        total = total + (cart[i]->price * cart[i]->quantity);
    }

    return total;
}
