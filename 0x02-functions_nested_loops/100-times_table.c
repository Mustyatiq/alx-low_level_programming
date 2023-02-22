#include "main.h"
#include <stdio.h>

/**
 * times_table_table - prints n times table, starting
 * @n: integer input
 * Return: void
 */

void times_table_table(int n)
{
    int i, j, product;
    i = 0, j = 0;
    if(n < 16 && n > 0)
    {
        while (i < (n + 1))
        {
            while (j < (n + 1))
            {
                product = i * j;
                if (j != 0)
                    putchar(' ');
                if (product < 10)
                {
                    putchar(' ');
                    putchar(' ');
                    putchar('0' + product);
                }
                else if(product > 9 && product < 100)
                {
                    putchar(' ');
                    putchar('0' + (product / 10));
                    putchar('0' + (product % 10));
                }
                else
                {
                    putchar('0' + (product / 100));
                    putchar('0' + (product / 10) % 10);
                    putchar('0' + (product % 10));
                }
                if (j != n)
                    putchar(',');
                j++;
            }
            putchar('\n');
            i++;
            j = 0;
        }
    }
    putchar('\n');
}

int main(void)
{
    times_table_table(5);
    return (0);
}