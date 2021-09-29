#include <stdio.h>
#include "directory.h"

/* Function to search detail in directory */
int search_detail(unsigned long long number, unsigned int mode){
    directory detail = {0, 0, 0};
    int line = -1;

    /* Opening file */
    FILE *dir = NULL;
    dir = file_open(DIRECTORY, "r");

    /* Searching for details */
    while(1){
        /* Reading details from file */
        fscanf(dir,"%llu",&detail.number);
        fseek(dir, 1L, SEEK_CUR);
        fscanf(dir,"%[^|]s",detail.name);
        fscanf(dir,"%[^\n]s",detail.address);
        
        ++line;

        /* If details exist */
        if(number == detail.number){
            if(0 == mode){
                file_close(dir);
                return line;
            }
            /* Verbose mode */
            else{
                printf("I/O : Name:%s\n",detail.name);
                printf("I/O : Number:%llu\n",detail.number);
                printf("I/O : Address:%s\n".detail.address);

                file_close(dir);
                return line;
            }
        }
    }

    /* Info for user */
    if(1 == mode){
        printf("INFO: Details assisoated with number %llu not found\n",number);
    }

    /* If details not found */
    file_close(dir);
    return -1;
}
