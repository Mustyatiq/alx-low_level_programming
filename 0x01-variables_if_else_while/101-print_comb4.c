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

	while (n <  56)
	{
		while (p < 57)
		{
			putchar(n);
			putchar(p);
			putchar(q);

			if (n == 55 && p == 56 && q == 57)
				break;

			putchar(44);
			putchar(32);
			q++;

			if (q == 58)
			{
				p++;
				q = p + 1;
			}
		}

		n++;
		p = n + 1;
		q = p + 1;
	}
		putchar('\n');
		return (0);
}
