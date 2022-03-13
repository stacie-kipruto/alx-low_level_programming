#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints numbers from 0 to 99
 * Return: 0 if properly executed
 */
int main(void)
{
	int c;

	for (c = 0; c <= 99; c++)
	{
	putchar ((c / 10) + '0');
	putchar ((c % 10) + '0');
	if (c != 99)
	{
	putchar(44);
	putchar(32);
	}
	}
	putchar(10);
	return (0);
}
