#include <stdio.h>
#include <string.h>
#include "directory.h"

/* Function to delete details */
bool delete_detail(unsigned long long number, unsigned int mode){
    int line = search_detail(number, 0);
	
	directory detail = {0, 0, 0};
    /* If entered details is present in directory */
    if(-1 != line){
		char temp[2] = {0};
		
        /* Open directory */
        FILE *dir = file_open(DIRECTORY,"rb+");
        
        /* Creating a backup directory */
        FILE *backup = file_open(BACKUP, "wb");

        /* Reading file from first */
        fseek(dir, 0L, SEEK_SET);
        fseek(backup, 0L, SEEK_SET);
        
		/* Searching for details */
		while(!feof(dir)){
			detail.number = 0;
			detail.name[0] = '\0';
			detail.address[0] = '\0';
			
			/* Reading details from file */
			fread(&detail.number, sizeof(detail.number), 1UL, dir);
			fread(&temp, 1UL, 1UL, dir);
			temp[0] = 0; temp[1] = 0;
			while(fread(&temp, 1UL, 1UL, dir) && temp[0] != '|'){
				strcat(detail.name, temp);
				temp[0] = 0; temp[1] = 0;
			}
			while(fread(&temp, 1UL, 1UL, dir) && temp[0] != '\n'){
				strcat(detail.address, temp);
				temp[0] = 0; temp[1] = 0;
			}
			strcat(detail.address, "\n");
			
            if(detail.number != number){
                fwrite(&detail.number, sizeof(detail.number), 1UL, backup);
				fwrite("|", 1UL, 1UL, backup);
				fwrite(detail.name, strlen(detail.name), 1UL, backup);
				fwrite("|", 1UL, 1UL, backup);
				fwrite(detail.address, strlen(detail.address), 1UL, backup);
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
