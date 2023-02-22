#include "main.h"
#include <stdio.h>

/**
 * add - adds two integers and returns the result.
 * @a: integer input
 * @b: integer input
 * Return: a + b
 */

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}