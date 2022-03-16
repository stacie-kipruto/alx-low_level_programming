#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @s: starting point
*
* Return: returns void
*/
void print_to_98(int s)
{
	if (s > 98)
	{
		while (s >= 98)
		{
			if (s == 98)
				printf("%d\n", s);
			else
				printf("%d, ", s);
			s--;
		}
	}
	else
	{
		while (s <= 98)
		{
			if (s == 98)
				printf("%d\n", s);
			else
				printf("%d, ", s);
			s++;
		}
	}
}
