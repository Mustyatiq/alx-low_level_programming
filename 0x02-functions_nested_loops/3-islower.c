#include "main.h"

/**
 * _islower(int c) - checks for lower case character
 * Return: void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
