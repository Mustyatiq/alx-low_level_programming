#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and uppercase
 * Return: 0
 */

int main(void)
{
	int n = 97;

	while (n  < 173)
	{
		putchar(n);
	}

	n = 65;

	while (n < 91)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
