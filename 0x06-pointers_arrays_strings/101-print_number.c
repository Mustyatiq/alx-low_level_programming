#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*
*/

void print_number(int n)
{
	int j, k, l, neg;

	j = 10;
	neg = 0;
	if(n < 0)
	{ 
		n *= -1;
		neg = 1;
	}
	/*Finds multiple of 10 in which the modulo will give the first digit of the number*/
	while(1)
	{
		if ((n / j  > 0 && n / j < 10) || n < 10)
			break;
		j *= 10;
	}
	/*printf("J is :%d\n", j);*/
	l = j;
	k = n;
	/*Calculating the digits and printing them. uncomment the printf to see how it works*/
	if(n >= 10)
	{
		if (neg) _putchar('-');
		while (j >= 1)
		{
			if(j != l)
				k = k % (j * 10);
			_putchar('0' + (k / j));	
			j /= 10;
		}
	} else
	{
		if(neg) _putchar('-');
		_putchar('0' + n);
	}
}
