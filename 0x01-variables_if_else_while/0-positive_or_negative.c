#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - to tell if a random number is either - or +
 *
 * n is the random integer
 *
 * Return: the integer
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    if(n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if(n ==0 ){
        printf("%d is zero\n", n);
    }else{
        printf("%d is negative\n", n);
    }
    return (0);
}
