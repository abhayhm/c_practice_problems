/* Name: Abhay HM
 * Date: 13/09/2021
 * Info: Program to calculate simple and compound interest. 
 */

#include <stdio.h>
#include "interest.h"

int main(){
    double principle_amount = 0, interest_rate = 0;
    unsigned int time = 0, iterations = 0, choice = 0;
	
    /* Menu for user */
    printf("Choose from the below option:\n");
    printf("1) Simple interest\n");
    printf("2) Compound interest\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    /* Calculate simple interest */
    if(1 == choice){
        printf("Enter principle amount:");
        scanf("%lf",&principle_amount);
        
        printf("Enter interest rate:");
        scanf("%lf",&interest_rate);
        
        printf("Enter time(in years):");
        scanf("%u",&time);
        
        printf("Simple interest: %g\n",simpleinterest(principle_amount, interest_rate, time));
    }
    /* Calculate compound interest */
    else if(2 == choice){
        printf("Enter principle amount:");
        scanf("%lf",&principle_amount);
        
        printf("Enter interest rate:");
        scanf("%lf",&interest_rate);
        
        printf("Enter number of times interest applied per time period:");
        scanf("%u",&iterations);
        
        printf("Enter number of time period elapsed:");
        scanf("%u",&time);
        
        printf("Compound interest: %g\n",compoundinterest(principle_amount, interest_rate, iterations, time));
    }
    /* Invalid input */
    else{
        printf("Invalid choice\n");
    }

    /* Exit */
    return 0;
}

