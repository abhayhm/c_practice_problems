/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to perform math functions.
 */

#include <stdio.h>
#include <math.h>

int main(){

    int x = 0, n = 0, choice = 0;

    printf("List of options:\n");
    printf("1) Square root\n");
    printf("2) Natural log\n");
    printf("3) Log10x\n");
    printf("4) Power\n");
    printf("5) Cos(x)\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:{
                   printf("Enter the number:");
                   scanf("%d",&x);
                   printf("Square root of %d is: %g\n",x,sqrt(x));
               }break;
        
        case 2:{
                   printf("Enter the number:");
                   scanf("%d",&x);
                   printf("Natural log of %d is : %g\n",x,log(x));
               }break;
        
        case 3:{
                   printf("Enter the number:");
                   scanf("%d",&x);
                   printf("Log10(%d) is : %g\n",x,log10(x));
               }break;
        
        case 4:{
                   printf("Enter the number:");
                   scanf("%d",&x);
                   
                   printf("Enter the power:");
                   scanf("%d",&n);

                   printf("Power of (%d,%d) is : %g\n",x,n,pow(x,n));
               }break;
        
        case 5:{
                   printf("Enter the number:");
                   scanf("%d",&x);
                   printf("Cos(%d) is: %g\n",x,cos(x));
               }break;

        default:{
                    printf("Invalid choice input\n");
                }break;
    }

    /* Exit */
    return 0;
}

