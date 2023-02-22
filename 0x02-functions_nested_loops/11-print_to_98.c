#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to
 *  98, followed by a new line.
 * Return: void
 */

void print_to_98(int n)
{
    if(n < 98)
    {
        while(n < 99)
        {
            printf("%d",n);
            if(n != 98)
            {
                printf(", ");
            }
            n++;
        }
        putchar('\n');
        return (0);
    }
    /*Second while*/
    while (n > 97)
    {
        printf("%d", n);
        if (n != 98)
        {
            printf(", ");
        }
        n--;
    }
    putchar('\n');
}

int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}