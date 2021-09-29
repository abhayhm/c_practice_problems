#include <stdio.h>
#include "directory.h"

/* Function to delete details */
bool delete_detail(unsigned long long number, unsigned int mode){
    int line;

    if(-1 != search_detail(number, 0)){
        line = search_detail(number, 0);
        

        if(1 == mode){
            printf("INFO: Details assisoated with number %llu deleted successfully\n",number);
        }
        return true;
    }
    
    if(1 == mode){
        /* Info for user */
        printf("INFO: Details assisoated with number %llu not found\n",number);
    }

    return false;
}
