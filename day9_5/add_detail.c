#include <stdio.h>
#include <stdbool.h>
#include "directory.h"

/* Function for adding detail in directory */
bool add_detail(void){
    directory detail = {0, 0, 0};

    /* Reading from user */
    printf("INFO: Reading details\n");
    printf("I/O : Enter name:");
    fgets(detail.name, 20, stdin);
    printf("I/O : Enter address:");
    fgets(detail.address, 100, stdin);
    printf("I/O : Enter number:");
    scanf("%llu", &detail.number);

    /* Writing details to directory */
    if(-1 == search_detail(detail.number, 0)){
        FILE *dir = file_open(DIRECTORY, "a");
        fprintf(dir, "%llu|%s|%s\n", detail.number, detail.name, detail.address);
        file_close(dir);
    }
    /* If details already exist */
    else{
        printf("INFO: Phone number already exist\n");
        return false;
    }
    return true;
}
