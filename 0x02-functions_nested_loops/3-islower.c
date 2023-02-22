#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: integer input to be checked
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
    if(c >= 97 && c <= 122)
        return (1);

    return (0);
}

int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}