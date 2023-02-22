#include "main.h"
#include <stdio.h>

/**
 * isalpha - checks for alphabetic character
 * @c: integer input to be checked
 * Return: 1 if c is a letter 0 otherwise
 */

int _isalpha(int c)
{
    if((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
        return (1);

    return (0);
}


int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}