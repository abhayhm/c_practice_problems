/* Name: Abhay HM
 * Date: 28/09/2021
 * Info: Program to display conttents of the file. 
 */

#include <stdio.h>

#define SIZE 100

int main(){
    /* Pointers and required storage */
    FILE *file_ptr = NULL; 
    char file_name[SIZE] = {0};
    char ch = '\0';

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

    /* Displaying content of file */
    while(ch = fgetc(file_ptr), EOF != ch){
        fputc(ch, stdout);
    }

    /* Exit */
    return 0;
}

