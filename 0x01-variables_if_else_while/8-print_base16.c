#include <stdio.h>

/**
 * main - Prints numbers of base 16
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		n++
	}

	n = 97;

	while (n <= 103)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
