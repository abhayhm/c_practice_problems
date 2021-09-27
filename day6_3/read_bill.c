#include <stdio.h>
#include <stdlib.h>
#include "billing.h"

/* Function to read price and quantity */
void read_bill(item **cart, unsigned int size){
    
	/* Allocating memory */
    for(unsigned int i = 0; i < size; ++i){
        *(cart + i) = (item *)calloc(1,sizeof(item));
        
        if(NULL == *(cart + i)){
            return;
        }
    }
	
	/* Reading price */
    printf("Enter the price for each item:\n");
    for(unsigned int i = 0; i <size; ++i){
        printf("Item %u:",i + 1);
        scanf("%u",&(cart[i]->price));
    }

	/* Reading quantity */
    printf("Enter the quantity for each item:\n");
    for(unsigned int i = 0; i <size; ++i){
        printf("Item %u:",i + 1);
        scanf("%u",&(cart[i]->quantity));
    }
}
