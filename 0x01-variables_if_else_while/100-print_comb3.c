#include <stdio.h>

/**
 * main - prints all the possible combinations of two digit numbers
 * Return: 0
 */

int main(void)
{
	int n = 48;
	int p = n + 1;

	while (n < 57)
	{
		putchar(n);
		putchar(p);

		if (n == 56 && p == 57)
			break;
		putchar(44);
		putchar(32);
		p++;
		if (p == 58)
		{
			n++;
			p = n + 1;
		}
	}

	putchar('\n');
	return (0);
}

