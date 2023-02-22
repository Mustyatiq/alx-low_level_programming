#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
    float c = 0;
    float a, b, i;
    a = 1;
    b = 2;
    i = 0;

    printf("%0.0f, %0.0f, ", a, b);
    while (i < 97)
    {
        c = a + b;
        if (i != 96)
            printf("%0.0f, ", c);
        else
            printf("%0.0f", c);

        a = b;
        b = c;
        i++;
    }

    return (0);
}
