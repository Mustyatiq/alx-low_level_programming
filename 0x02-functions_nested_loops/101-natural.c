#include <stdio.h>

/**
 * main - computes and prints the sum of all the 
 * multiples of 3 or 5 below 1024 (excluded), followed 
 * by a new line.
 * Return: Always 0
 */

int main(void)
{
    int n, sum;
    n = 0, sum = 0;

    while(n < 1024)
    {
        if ((n % 3) == 0 || (n % 5) == 0)
            sum += n;
        printf("n is : %d and sum is : %d\n", n, sum);
        n++;
    }
        putchar('0' + (sum / 100000));
        putchar('0' + (sum % 100000) / 10000);
        putchar('0' + ((sum % 100000) % 10000) / 1000);
        putchar('0' + (((sum % 100000) % 10000) % 1000) / 100);
        putchar('0' + ((((sum % 100000) % 10000) % 1000) % 100) / 10);
        putchar('0' + ((((sum % 100000) % 10000) % 1000) % 100) % 10);

    putchar('\n');

    return (0);
}