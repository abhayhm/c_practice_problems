#include <stdio.h>
#include "directory.h"

/* Function to handle file */
FILE *file_open(char *file_name, char *mode){
    /* Opening file */
    FILE *fptr = fopen(file_name, mode);
    
    /* If file not exist */
    if(NULL == fptr){
        printf("%s: No such file or directory\n");
        return 0;
    }

    /* Returning pointer */
    return fptr;
}

/* Function to close file */
void file_close(FILE *fptr){
    fclose(fptr);
}

