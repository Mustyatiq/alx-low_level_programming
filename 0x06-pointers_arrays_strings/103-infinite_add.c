#include "main.h"

/**
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
*Assumes that strings are never empty and
*that numbers will always be positive, or 0.
*Assumes there are only digits stored in the number strings.
*If result can be stored in the buffer,
*returns a pointer to the result.
*If result cannot be stored in the buffer, returns `0`.
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, i, j, k, sum, carry, remain;
	char store;

	i = j = k = carry = remain = sum = 0;
	while(*(n1 + i) != '\0') i++; /*length of n1*/
	while(*(n2 + j) != '\0') j++; /*length of n2*/
	if (i >= size_r || i == (size_r - 1) || j >= size_r || j == size_r - 1) 
			return((int) 0);
	while(k < size_r) /*Calculating the sum*/
	{
		a = b = 0;
		if (k < i) a = (*(n1 + (i - k - 1)) - 48);
		if (k < j) b = (*(n2 + (j - k - 1)) - 48); 
		sum = a + b + carry;
		carry = sum / 10;
		remain = sum % 10;
		if (sum)
		{
			*(r + k) = 48 + remain;
			*(r + k + 1) = '\0';
		} else *(r + k) = '\0';
		if (k >= i && k >= j) break;
		k++;
	}
	i = j = 0;
	while(*(r + j) != '\0') j++; /*Lenght of buffer with result in it*/
	while (i < (j  + 1) / 2) /*Reversing the string in buffer due to summing from left*/
	{
		store = *(r + i);
		*(r + i) = *(r + (j - i - 1));
		*(r + (j - i - 1)) = store;
		i++;
	}
	return (r);
}
