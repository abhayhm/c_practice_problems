/* Name: Abhay HM
 * Date: 03/10/2021
 * Info: Program to perform operations of telephone directory.
 */

#include <stdio.h>
#include <unistd.h>
#include "directory.h"

int main(){
    directory detail = {0, 0, 0};
    char option = '\0';

    /* Checking if telephone directory exist */
    if(0 != access(DIRECTORY, F_OK)){
        printf("INFO: No existing telephone directory found\n");
        printf("INFO: Creating new telephone directory\n");
        create_directory();
    }
    
    /* Menu for user */
    while(option != 'q' && option != 'Q'){
        printf("\n");
        printf("List of operations on telephone directory:\n");
        printf("a) Add number and details\n");
        printf("b) Delete number and details\n");
        printf("c) Edit number and details\n");
        printf("d) Search number and details\n");
        printf("[Q/q] to quit program\n");
        printf("Enter your choice:");
        scanf(" %c",&option);
        getchar();

        switch(option){
            
            case 'a':{
                        add_detail();   
            }break;
            
            case 'b':{
                        unsigned long long number = 0;
                        printf("Enter the phone number to delete:");
                        scanf("%llu",&number);
						getchar();
                        delete_detail(number, 1);
            }break;
            
            case 'c':{
                        unsigned long long number = 0;
                        printf("Enter the phone number to edit:");
                        scanf("%llu",&number);
						getchar();
                        edit_detail(number);
            }break;
            
            case 'd':{
                        unsigned long long number = 0;
                        printf("Enter the phone number to search:");
                        scanf("%llu",&number);
						getchar();
                        search_detail(number, 1);
            }break;
            
            case 'q':{
						/* Exit */
						return 0;
			}break;
            
            default:{
                        printf("Invalid input\n");
            }
        }
    }
}

