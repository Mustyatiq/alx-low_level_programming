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
		if (n != 98)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		} else 
			_putchar(n);
		n = i;
	}
}
