#include <stdio.h>
/**
 * main - prints all possible combination of two two-digit number
 * Return: 0
*/
int main(void)
{
	int a = 48;
	int b = 48;
	int c = a;
	int d = b + 1;

	while (a < 58)
	{
		while (c < 58)
		{
			if (a == 57 && b == 56)
				break;
			putchar(a);
			putchar(b);
			putchar(32);
			putchar(c);
			putchar(d);
			if (b == 56 && c == 57 && d == 57)
				goto s;
			putchar(44);
			putchar(32);
s:
			d++;
			if (d > 57)
			{
				c++;
				d = 48;
			}
		}
		b++;
		if (b == 58)
		{
			a++;
			b = 48;
		}
		c = a;
		if (b == 57)
			d = b;
		else
			d = b + 1;
	}
	putchar('\n');
	return (0);
}
