#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: input
 * Return: void
 */

void print_to_98(int n)
{
	int m = n;

	while (1)
	{
		m = n;
		if (m < 0)
		{
			_putchar('-');
			m *= -1;
		}
		if (m > 9)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		} else if (m > 99)
		{
			_putchar((m / 100) + '0');
			_putchar(((m - 100) / 10) + '0');
			_putchar((m % 10) + '0');
		} else
			_putchar(n + '0');
		m = n;
		if (m != 98)
		{
			_putchar(44);
			_putchar(32);
		} else
		{
			_putchar('\n');
			break;
		}
		if (n > 98)
			n--;
		n++;
	}
}
