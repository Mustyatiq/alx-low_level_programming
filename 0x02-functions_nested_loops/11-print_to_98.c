#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: input
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		n = i;

		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}

		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		} else
		{
			_putchar(n + '0');
		}
		if (n != 98)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}
