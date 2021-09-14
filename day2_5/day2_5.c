/* Name: Abhay HM
 * Date: 14/09/2021
 * Info: Program to generate prime numbers in given range. 
 */

#include<stdio.h>

int main()
{
    int number, integer, sqrt, index;
    char option;

    /* Reading N from user */
    printf("Enter the limit[N]: ");
    scanf("%d",&number);

    /* Check for valid input */
    if( number > 2 )
    {
        /* Prime array */
        int prime[number];

        /* Initilize prime array */
        for( integer = 0; integer <= number; ++integer )
            prime[integer] = integer;

        /* Calculate squre root */
        for( sqrt = 1; sqrt*sqrt < number; ++sqrt);

        /* Sieve of Eratosthenes method to calculate prime */
        for( integer = 2; integer <= sqrt; ++integer )
        {
            if( prime[integer] != 0)
            {
                for( index = 2; integer * index <= number; ++index )
                {
                    prime[integer * index] = 0;
                }
            }
        }

        /* Generated prime numbers */
        for( integer = 2; integer <= number; ++integer )
        {
            if( prime[integer] != 0 )
                printf("%d ",prime[integer]);
        }

        printf("\n");
    }
    /* Invalid input */
    else if( number < 2 )
    {
        printf("Invalid input\n");
    }

    /* Exit */ 
    return 0;
}

