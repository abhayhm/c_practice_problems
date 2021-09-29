#include <stdio.h>
#include "directory.h"

/* Function to create directory */
bool create_directory(void){
    FILE *dir = NULL;
   
    /* Info for user */ 
    printf("INFO: Creating empty directory\n");
    dir = file_open(DIRECTORY, "w");
    printf("INFO: Empty directory created successfully\n");

    file_close(dir);
}
