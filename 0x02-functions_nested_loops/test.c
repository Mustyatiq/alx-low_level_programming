#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: input
 * Return: void
 */
int main(void)
{
	print_to_98(-999);

	return (0);
}


void print_to_98(int n)
{
	int m = n, p;

	while (1)
	{
		m = n;
		p = m - ((m / 100) * 100);
		if (m < 0)
		{
			putchar('-');
			m *= -1;
			p = m - ((m / 100) * 100);
		}
		if (m > 9 && m < 100)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
		} else if (m > 99)
		{
			putchar((m / 100) + '0');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
		} else
			putchar(m + '0');
		m = n;
		if (m != 98)
		{
			putchar(44);
			putchar(32);
		} else
		{
			putchar('\n');
			break;
		}
		if (m > 98)
			n--;
		else
			n++;
	}
}
