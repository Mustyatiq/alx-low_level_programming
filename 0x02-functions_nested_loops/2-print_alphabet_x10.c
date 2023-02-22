#include "main.h"
#include <stdio.h>


/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, 
 * followed by a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
    int n, m;

    n = 97, m = 0;
    while(m < 10)
    {
        while(n < 123)
        {
            putchar(n);
            n++;
        }
    putchar('\n');
    m++;
    n = 97;
    }
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}