#ifndef __DIRECTORY_H__
#define __DIRECTORY_H__

#include <stdio.h>
#include <stdbool.h>

#define DIRECTORY "telephone_directory.txt"
#define BACKUP "backup.txt"

/* Structure for directory */
typedef struct{
    char name[20];
    char address[100];
    unsigned long long number;
}directory;

/* Function declaration */
bool create_directory(void);
bool add_detail(void);
bool delete_detail(unsigned long long, unsigned int); //pending
bool edit_detail(unsigned long long);
int search_detail(unsigned long long, unsigned int);
FILE *file_open(char *, char *);
void file_close(FILE *);

#endif
