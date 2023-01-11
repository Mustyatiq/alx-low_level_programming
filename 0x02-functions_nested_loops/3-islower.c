#include "main.h"

/**
 * _islower - checks for lower case character
 * Return: void
 * @c : input to function
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
