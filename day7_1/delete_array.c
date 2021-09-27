#include <stdlib.h>
#include "array_operations.h"

/* Function to delete array */
void delete_array(int *array){
    free(array);
}
