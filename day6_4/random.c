#include <stdlib.h>
#include "snake_ladder.h"

/* Function to generate random numbers */
unsigned int random_number(void){
    return ((rand() % 6) + 1);
}
