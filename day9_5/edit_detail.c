#include <stdio.h>
#include <stdbool.h>
#include "directory.h"

/* Function to edit detail */
bool edit_detail(unsigned long long number){
    if(true == delete_detail(number, 0)){
        /* Editing details */
        add_detail();

        return true;
    }
    
    /* Info for the user */
    printf("INFO: Details assisoated with number %llu not found\n",number);

    return false;
}
