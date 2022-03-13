#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
