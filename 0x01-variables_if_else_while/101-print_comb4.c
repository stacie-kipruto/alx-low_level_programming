#include <stdio.h>
/**
 * main -this is the main code
 *
 * Return: 0 if properly executed
 */
int main(void)
{
	int a, l, x;

	for (a = 0; a < 10; a++)
		for (l = a + 1; l < 10; l++)
			for (x = l + 1; x < 10; x++)
			{
				if (a != l && l != x && x != a)
				{
					putchar(a % 10 + '0');
					putchar(l % 10 + '0');
					putchar(x % 10 + '0');

					if ((a == 7) && (l == a + 1) && (x == l + 1))
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}

			}
	putchar('\n');
	return (0);
}
