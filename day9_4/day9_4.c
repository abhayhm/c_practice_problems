/* Name: Abhay HM
 * Date: 29/09/2021
 * Info: Program to read file with numbers and write to corresponding even / odd file.
 */

#define _GNU_SOURCE
#include <stdio.h>

#define SIZE 100

int main(){
    /* Pointers and required storage */
    FILE *src_file_ptr = NULL, *even_file_ptr = NULL, *odd_file_ptr = NULL; 
    int number = 0, flag = 0;
    char src_file_name[SIZE] = {0};
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

    /* Open file */
    even_file_ptr = fopen("even.txt","wb");

    /* If even file creation failed */
    if(NULL == even_file_ptr){
        printf("%s: Error creating file\n","even.txt");
        return 0;
    }

    /* Open file */
    odd_file_ptr = fopen("odd.txt","wb");

    /* If even file creation failed */
    if(NULL == odd_file_ptr){
        printf("%s: Error creating file\n","odd.txt");
        return 0;
    }

    /* Getting file pointer to begining */
    fseek(src_file_ptr, 0L, SEEK_SET);
    fseek(even_file_ptr, 0L, SEEK_SET);
    fseek(odd_file_ptr, 0L, SEEK_SET);

    /* Checking contents of file continously */
    while(ch = fgetc(src_file_ptr), EOF != ch){
        /* Validating number */
        if((ch <= '9' && ch >= '0') || ('-' == ch && number == 0)){
            ++number;
            if((ch - 48) % 2 ==0){
                flag = 0;
            }
            else{
                flag = 1;
            }
        }
        /* End of line */
        else if('\n' == ch && number != 0){
            /* Getting file pointer back to starting of line */
            ++number;
            fseek(src_file_ptr, (~number)+1, SEEK_CUR);

            /* If number is even */
            if(0 == flag){
                while(ch = fgetc(src_file_ptr), '\n' != ch){
                    fputc(ch,even_file_ptr);
                }
                fputc('\n',even_file_ptr);
                number = 0;
            }
            /* If number is odd */
            else{
                while(ch = fgetc(src_file_ptr), '\n' != ch){
                    fputc(ch,odd_file_ptr);
                }
                fputc('\n',odd_file_ptr);
                number = 0;
            }
        }
        /* Invalid file content */
        else{
            printf("File has invalid content\n");
            fcloseall();
            remove("even.txt");
            remove("odd.txt");

            /* Exit */
            return 0;
        }
    }

    /* Info for user */
    printf("Successfully inserted even numbers to \"even.txt\" and odd numbers to \"odd.txt\"\n"); 

    /* Closing file */
    fcloseall();

    /* Exit */
    return 0;
}

