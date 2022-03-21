#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer to be swapped
 * @b: to be swapped
 */
void swap_int(int *a, int *b)
{
	int date;

	date = *a;
	*a = *b;
	*b = date;
}
