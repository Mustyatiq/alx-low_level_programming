#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of a number.
 * @n: integer input to be checked
 * Return: absolute value
 */

int _abs(int n)
{
    if(n < 0)
    {
        return (n * -1);
    }
    return n;
}

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}