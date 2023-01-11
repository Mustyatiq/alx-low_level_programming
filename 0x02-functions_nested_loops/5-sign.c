#include "main.h"

/**
 * print_sign - prints the sign of a numbe
 * Return: void
 * @n : function input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
