#include <stdio.h>

/**
 *  main - program that prints possible combinations of single digit
 *  separated by , and space
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 34; i < 44; i++)
	{
		putchar(i);
		if (i != 43)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
