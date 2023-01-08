#include <stdio.h>

/**
 * main - prints all possible combinations of single digit number
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(32);
		if (n == 57)
			goto s;
		putchar(44);
s:
		n++;
	}

	return (0);
}
