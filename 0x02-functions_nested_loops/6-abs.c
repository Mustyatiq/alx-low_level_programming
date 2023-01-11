#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: void
 * @a: input
 */

int _abs(int a)
{
	if (a > 0 || a == 0)
		return (a);
	return (-1 * a);
}
