#include "main.h"

/**
 * _puts_recursion - print string and a new line
 * @s: string to print
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
