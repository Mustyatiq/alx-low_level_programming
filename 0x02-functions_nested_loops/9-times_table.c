#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
    int i, j, product;
    i = 0, j = 0;

    while(i < 10)
    {
        while(j < 10)
        {
            product = i * j;
            putchar(' ');
            if(product < 10)
            {
                putchar(' ');
                putchar('0' + product);
            } else{
                putchar('0' + (product/10));
                putchar('0' + (product % 10));
            }
            if(j != 9)
                putchar(',');
            j++;
        }
        putchar('\n');
        i++;
        j = 0;
    }
}

int main(void)
{
    times_table();
    return (0);
}