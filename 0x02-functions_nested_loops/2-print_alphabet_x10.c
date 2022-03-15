#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i, k;


	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(c + i);

		}
		_putchar('\n');
	}
}
