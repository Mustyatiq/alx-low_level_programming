#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a number n and
 * determines whther the last digit is positive,negative or zero
 * Return: 0
 */


int main(void)
{
	int n;

	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if (last_digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		} else if (last_digit < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		} else
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}

					return (0);
}
