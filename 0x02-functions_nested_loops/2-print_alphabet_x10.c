#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Return - void
 */

void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0 ;i <= 10; i++)
	{
		for (n = 0;n <= 25; n++)
		{
			_putchar('a' + n);
		}
		_putchar('\n');
		n = 0;
	}
	_putchar('\n');
}
