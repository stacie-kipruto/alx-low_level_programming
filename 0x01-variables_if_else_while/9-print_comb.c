#include <stdio.h>

/**
 *  main - program that prints possible combinations of single digit
 *  separated by , and space
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
