#include "main.h"

/**
 * print_diagsums - print the sums of diagonals for array a
 * @a: array to get sums of diagonals
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, lsum = 0, rsum = 0;

	for (i = 0; i < size; i++)
		lsum += a[(size + 1) * i];

	j = size - 1;

	for (i = 1; i <= size; i++)
		rsum += a[i * j];

	printf("%d, %d\n", lsum, rsum);
}
