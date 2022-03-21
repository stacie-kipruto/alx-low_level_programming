#include "main.h"
/**
 * _puts - prints a strring followed by a new line
 * @str: pointer to string.
 *
 * Return: void
 */
void _puts(char *str)
{
	int c;

	c = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		c++;
		str++;
	}
	_putchar('\n');
}
