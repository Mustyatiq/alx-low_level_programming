#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 * @n: integer input to be checked
 * Return: 1 if n is +ve 0 if n is 0 and -1 if n is -ve
 */

int print_sign(int n)
{
    if(n > 0)
    {
        putchar(43);
        return (1);
    } else if(n < 0)
    {
        putchar(45);
        return (-1);
    }
        putchar(48);
        return (0);
}

int main(void)
{
        int r;

        r = print_sign(98);
        putchar(',');
        putchar(' ');
        putchar(r + '0');
        putchar('\n');
        r = print_sign(0);
        putchar(',');
        putchar(' ');
        putchar(r + '0');
        putchar('\n');
        r = print_sign(0xff);
        putchar(',');
        putchar(' ');
        putchar(r + '0');
        putchar('\n');
        r = print_sign(-1);
        putchar(',');
        putchar(' ');
        putchar(r + '0');
        putchar('\n');
        return (0);
}
