#include <stdio.h>
#include "billing.h"

/* Function to print bill */
void bill(item **cart, unsigned int size){
    printf("------------------------------------------------\n");
    printf("|  ITEM    |  PRICE  |  QUANTITY  |  SUBTOTAL  |\n");
    printf("------------------------------------------------\n");

    for(unsigned int i = 0; i < size; ++i){
        printf("|  Item %u  |  %5u  |  %8u  |  %8u  |\n", i + 1, cart[i]->price, cart[i]->quantity, cart[i]->price * cart[i]->quantity);
    }

    printf("------------------------------------------------\n");
    unsigned int total_amount = total(cart, size);
    printf("|  TOTAL: %7u                              |\n",total_amount);

    unsigned int after_discount = discount(total_amount);
    printf("|  DISCOUNT: %2u%% [%5d]                       |\n",(total_amount<1000)?5:(total_amount>5000)?15:5,after_discount - total_amount);

    printf("------------------------------------------------\n");
    printf("|  GDRAND TOTAL: %7u                       |\n",after_discount);
    printf("------------------------------------------------\n");
}

