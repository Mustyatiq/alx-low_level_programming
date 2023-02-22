#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
    unsigned long long int c = 0;
    unsigned long long int a, b, i;
    a = 1;
    b = 2;
    i = 0;

    printf("%lld, %lld, ", a, b);
    while(i < 49)
    {
        c = a + b;
        if(i != 48)
            printf("%lld, ", c);
        else
            printf("%lld", c);

        a = b;
        b = c;
        i++;
    }

    return (0);
}
