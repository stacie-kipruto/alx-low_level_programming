#include <stdio.h>

/**
 *  main -Program entry point
 *
 *  Retur: on success. Error code otherwise
 */
int main (void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
