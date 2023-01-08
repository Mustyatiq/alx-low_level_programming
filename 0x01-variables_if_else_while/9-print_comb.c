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
		putchar(44);
		n++;
	}

	return (0);
}
