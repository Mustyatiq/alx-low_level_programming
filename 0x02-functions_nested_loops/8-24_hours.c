#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack
 *  Bauer, starting from 00:00 to 23:59.
 * Return: void
 */

void jack_bauer(void)
{
    int i, j, k, l;

    i = 48, j = 48, k = 48, l = 48;

    while(i < 51)
    {
        while(j < 58)
        {
            while(k < 54)
            {
                while(l < 58)
                {
                    putchar(i);
                    putchar(j);
                    putchar(':');
                    putchar(k);
                    putchar(l);
                    putchar('\n');
                    l++;
                }
                k++;
                l = 48;
            }
            if (i == 50 && j == 52)
                break;
            j++;
            k = 48;
            l = 48;
        }
        
        i++;
        j = 48;
        k = 48;
        l = 48;
    }
}

int main(void)
{
    jack_bauer();
    return (0);
}