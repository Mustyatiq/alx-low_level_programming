#include <stdio.h>

/**
 * main - prints all possible combinations of three digit number
 * Return: 0
 */

int main(void)
{
	int n = 48;
	int p = n + 1;
	int q = p + 1;

	while (n <  57)
	{
		putchar(n);
		putchar(p);
		putchar(q);

		if (n == 56 && p == 57)
			break;

		putchar(44);
		putchar(32);
		q++;

		if (q == 58)
		{
			p++;
			q = p + 1;
		} else if (p == 57 && q == 58)
			n++;
	}

		putchar('\n');
		return (0);
}
