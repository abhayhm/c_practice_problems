/* Name: Abhay HM
 * Date: 27/09/2021
 * Info: Program to generate bill for items. 
 */

#include <stdio.h>
#include "billing.h"

int main(){
    item *cart[ITEMS];

	/* Reading bill details */
    read_bill(cart, ITEMS);
	
	/* Printing bill */
    bill(cart, ITEMS);

    /* Deleting bill */
    delete_bill(cart, ITEMS);
    
    /* Exit */
    return 0;
}

