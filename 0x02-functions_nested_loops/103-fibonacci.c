#include <stdio.h>

/**
 * main -  prints the sum of the even-valued terms, followed by a new line in the 
 * fibonacci sequence whose values do not exceed 4,000,000
 * Return: Always 0
 */

int main(void)
{
    unsigned long long int c = 0;
    unsigned long long int a, b, i, sum;
    a = 1;
    b = 2;
    i = 0;
    sum = 2;

    while (i < 31)
    {
        c = a + b;
        if(c % 2 != 0)
            sum += c;
        
        a = b;
        b = c;
        i++;
    }

    printf("%lld\n", sum);

    return (0);
}
