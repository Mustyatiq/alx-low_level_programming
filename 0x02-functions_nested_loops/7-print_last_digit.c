#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * Return: 0
 * @a: input
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		_putchar((-1 * b) + '0');
		return (b);
	}

	_putchar(b + '0');
	return (b);
}
