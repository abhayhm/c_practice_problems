#include "billing.h"

/* Function for calculating discount */
unsigned int discount(unsigned int total){
    if(total < 1000){
        return total - (unsigned int)(((double)total / 100.0) * 5);
    }
    if(total >= 1000 && total <= 5000){
        return total - (unsigned int)(((double)total / 100.0) * 10);
    }
    else{
        return total - (unsigned int)(((double)total / 100.0) * 15);
    }
}
