#include "volume.h"

/* Function for volume of cone */
double cone(unsigned int radius, unsigned int height){
    return (1.0 / 3 * (3.14 * ((radius * radius) * height)));
}
