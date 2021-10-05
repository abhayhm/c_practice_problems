#include <stdio.h>
#include <string.h>
#include "directory.h"

/* Function to search detail in directory */
int search_detail(unsigned long long number, unsigned int mode){
    directory detail = {0, 0, 0};
    int line = -1;
	char temp[2] = {0};
	
    /* Opening file */
    FILE *dir = NULL;
    dir = file_open(DIRECTORY, "rb");

    /* Searching for details */
    while(!feof(dir)){
        /* Reading details from file */
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
                printf("I/O : Address:%s\n",detail.address);

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
