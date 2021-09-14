#include <math.h>
#include "interest.h"

/* Function for compound interest calculation */
double compoundinterest(double principle_amount,double interest_rate, unsigned int iterations, unsigned int time){
    if(principle_amount < 0 || interest_rate < 0 || iterations < 0 || time < 0){
        return 0;
    }
    return (principle_amount * pow((1 + ((interest_rate/100) /iterations)),(iterations * time)) - principle_amount);
}
