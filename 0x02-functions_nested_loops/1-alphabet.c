#include "main.h"

/**
 * main - prints alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);

}

void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	_putchar(&alpha);

	return;
}
