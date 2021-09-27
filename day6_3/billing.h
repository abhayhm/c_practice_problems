#ifndef __BILLING_H__
#define __BILLING_H__

#define ITEMS 5

/* Structure for iteam details */
typedef struct{
    unsigned int price;
    unsigned int quantity;
}item;

/* Function declaration */
unsigned int total(item **, unsigned int);
unsigned int discount(unsigned int);
void bill(item **, unsigned int);
void read_bill(item **, unsigned int);
void delete_bill(item **, unsigned int);

#endif
