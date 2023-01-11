#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 0; n < 25; n++)
	{
		_putchar('a' + n);
	}
}
