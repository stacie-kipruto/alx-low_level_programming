#include <stdio.h>

/**
 * main - prints your code
 *
 * Return: it will return 0 if properly executed, if not 0 it will return other..
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
