#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 113 || n == 101)
			goto s;
		putchar(n);
s:
		n++;
	}
	putchar('\n');

	return (0);
}
