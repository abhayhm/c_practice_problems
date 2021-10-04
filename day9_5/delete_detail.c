#include <stdio.h>
#include "directory.h"

/* Function to delete details */
bool delete_detail(unsigned long long number, unsigned int mode){
    int line = search_detail(number, 0);
	
	directory detail = {0, 0, 0};
    /* If entered details is present in directory */
    if(-1 != line){
        /* Open directory */
        FILE *dir = file_open(DIRECTORY,"r+");
        
        /* Creating a backup directory */
        FILE *backup = file_open(BACKUP, "w");

        /* Reading file from first */
        fseek(dir, 0L, SEEK_SET);
        fseek(backup, 0L, SEEK_SET);
        
		/* Searching for details */
		while(!feof(dir)){
			
			/* Reading details from file */
			fscanf(dir,"%llu",&detail.number);
			fseek(dir, 1L, SEEK_CUR);
			fscanf(dir,"%[^|]s",detail.name);
			fseek(dir, 1L, SEEK_CUR);
			fscanf(dir,"%[^\n]s",detail.address);
			fgetc(dir);
			
            if(detail.number != number){
                fprintf(backup, "%llu|%s|%s\n", detail.number, detail.name, detail.address);
            }
        }
		
        /* Closing files */
        file_close(dir);
        file_close(backup);

		/* Renaming backup file to main file */
		remove(DIRECTORY);
		rename(BACKUP, DIRECTORY);
		
        if(1 == mode){
            printf("INFO: Details assisoated with number %llu deleted successfully\n",number);
        }
        return true;
    }
    
    if(1 == mode){
        /* Info for user */
        printf("INFO: Details assisoated with number %llu not found\n",number);
    }

    /* If details not exist */
    return false;
}
