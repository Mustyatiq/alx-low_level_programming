#include "main.h"
#include <stdio.h>


/**
 * print_alphabet - prints the alphabet, in lowercase, 
 * followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
    int n;

    n = 97;

    while(n < 123)
    {
        putchar(n);
        n++;
    }
    putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}