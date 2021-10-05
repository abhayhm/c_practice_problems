#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "directory.h"

/* Function for adding detail in directory */
bool add_detail(void){
    directory detail = {0, 0, 0};
	int len = 0;

    /* Reading from user */
    printf("INFO: Reading details\n");
    printf("I/O : Enter name:");
    fgets(detail.name, 20, stdin);
	
	len = strlen(detail.name);
	detail.name[len-1] = '\0';
	
	printf("I/O : Enter address:");
    fgets(detail.address, 100, stdin);
	
	len = strlen(detail.address);
	detail.name[len-1] = '\0';
	
    printf("I/O : Enter number:");
    scanf("%llu", &detail.number);

    /* Writing details to directory */
    if(-1 == search_detail(detail.number, 0)){
        FILE *dir = file_open(DIRECTORY, "ab");
		
		fwrite(&detail.number, sizeof(detail.number), 1UL, dir);
		fwrite("|", 1UL, 1, dir);
		fwrite(detail.name, 1UL, strlen(detail.name), dir);
		fwrite("|", 1UL, 1, dir);
		fwrite(detail.address, 1UL, strlen(detail.address), dir);
        //fprintf(dir, "%llu|%s|%s", detail.number, detail.name, detail.address);
        file_close(dir);
		printf("INFO: Details added successfully\n");
    }
    /* If details already exist */
    else{
        printf("INFO: Phone number already exist\n");
        return false;
    }
    return true;
}
