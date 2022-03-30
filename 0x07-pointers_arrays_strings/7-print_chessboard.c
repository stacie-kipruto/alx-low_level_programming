#include "main.h"

/**
 * print_chessboard - prints values in chessboard
 * @a: array to print
 */
void print_chessboard(char (*a)[8])
{
	unsigned int n = sizeof(a), i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
