#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int n = i * j;
			int m = i * (j + 1);

			if (n < 10)
				_putchar(n + '0');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (j <= 8 && m > 9)
			{
				_putchar(44);
				_putchar(32);
			} else if (j <= 8 && m < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
