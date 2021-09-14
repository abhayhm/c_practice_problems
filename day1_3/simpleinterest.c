#include "interest.h"

/* Function for simple interest calculation */
double simpleinterest(double principle_amount, double interest_rate, unsigned int time){
    if(principle_amount < 0 || interest_rate < 0 || time < 0){
        return 0;
    }
    return ((principle_amount * interest_rate * time) / 100);
}
