/* Name: Abhay HM
 * Date: 28/09/2021
 * Info: Program to copy contents of source file to destination file. 
 */

#define _GNU_SOURCE
#include <stdio.h>

#define SIZE 100

int main(){
    /* Pointers and required storage */
    FILE *src_file_ptr = NULL, *dest_file_ptr = NULL; 
    char src_file_name[SIZE] = {0};
    char dest_file_name[SIZE] = {0};
    char ch = '\0';

    /* Reading file name from user */
    printf("Enter the source file name with full path:");
    scanf("%[^\n]s",src_file_name);
    getchar();

    /* Open file */
    src_file_ptr = fopen(src_file_name,"rb");

    /* Check if file exist */
    if(NULL == src_file_ptr){
        printf("%s: No such file or directory\n",src_file_name);
        return 0;
    }

    /* Read from user */
    printf("Enter the destination file name with fill path:");
    scanf("%[^\n]s",dest_file_name);

    /* Open file */
    dest_file_ptr = fopen(dest_file_name,"wb");
    
    /* If destination file creation failed */
    if(NULL == dest_file_ptr){
        printf("%s: Error creating file\n",dest_file_name);
        return 0;
    }

    /* Getting file pointer to begining */
    fseek(src_file_ptr, 0L, SEEK_SET);
    fseek(dest_file_ptr, 0L, SEEK_SET);

    /* Copying content of file */
    do{
        ch = fgetc(src_file_ptr);
        fputc(ch, dest_file_ptr);
    }while(EOF != ch);

	/* Closing file */
	fcloseall();
	
    /* Info for user */
    printf("Contents copied to destination file successfully\n");

    /* Exit */
    return 0;
}

