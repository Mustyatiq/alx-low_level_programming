#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer input 
 * Return: last digit of n
 */

int print_last_digit(int n)
{
    if (n < 0)
    {
        putchar('0' + ((n * -1) % 10));
        return ((n * -1) % 10);
    }
    putchar(48 + (n % 10));
    return (n % 10);
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}