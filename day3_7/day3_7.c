/* Name: Abhay HM
 * Date: 21/09/2021
 * Info: Program to evaluate F(x) = x + x3/3! + x5/5!....
 */

#include <stdio.h>

/* Function for factorial */
double factorial(double n){
    if(0 == n){
        return 1;
    }

    return n * factorial(n-1);
}

/* Function for evaluation of series */
double series(double x, int n){
    double sum = 0;

    for(int i = 0; i <= n; i += 2){
        sum = sum + ((x * i)/factorial(i));
    }

    return sum;
}

int main(){

    int n = 0;
    double x = 0;

    /* Read fro user */
    printf("Enter the number of elements in series:");
    scanf("%d",&n);

    printf("Enter the value of x:");
    scanf("%lf",&x);

    /* After evaluation */
    printf("After evaluation: %g\n",series(x,n));

    /* Exit */
    return 0;
}

