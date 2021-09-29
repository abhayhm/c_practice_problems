/* Name: Abhay HM
 * Date: 28/09/2021
 * Info: Program to count characters spaces tabs and lines in file. 
 */

#define _GNU_SOURCE
#include <stdio.h>

#define SIZE 100

int main(){
    /* Pointers and required storage */
    FILE *file_ptr = NULL; 
    char file_name[SIZE] = {0};
    char ch = '\0';
    unsigned int ch_count = 0, space_count = 0, tab_count = 0, line_count = 0;

    /* Reading file name from user */
    printf("Enter the file name with full path:");
    scanf("%[^\n]s",file_name);

    /* Open file */
    file_ptr = fopen(file_name,"rb");

    /* Check if file exist */
    if(NULL == file_ptr){
        printf("%s: No such file or directory\n",file_name);
        return 0;
    }

    /* Getting file pointer to begining */
    fseek(file_ptr, 0L, SEEK_SET);

    /* Counting required parameters from file */
    while(ch = fgetc(file_ptr), EOF != ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            ++ch_count;
        }
        else if(' ' == ch){
            ++space_count;
        }
        else if('\t' == ch){
            ++tab_count;
        }
        else if('\n' == ch){
            ++line_count;
        }
    }

    /* If file has only one line */
    if((ch_count > 0) && (0 == line_count)){
        ++line_count;
    }

    /* Info for user */
    printf("Number of character('s) in %s: %u\n",file_name, ch_count);
    printf("Number of space('s) in %s: %u\n",file_name, space_count);
    printf("Number of tab('s) in %s: %u\n",file_name, tab_count);
    printf("Number of line('s) in %s: %u\n",file_name, line_count);

	/* Closing file */
	fcloseall();
	
    /* Exit */
    return 0;
}

