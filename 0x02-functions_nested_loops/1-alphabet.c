#include "main.h"

/**
 * main - prints your code
 *
 * Return: always zero if success
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
