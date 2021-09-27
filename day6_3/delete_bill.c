#include <stdlib.h>
#include "billing.h"

/* Function to deallocate allocated memory for bill */
void delete_bill(item **cart, unsigned int size){
    for(unsigned int i = 0; i < size; ++i){
        free(*(cart + i));
    }
}
