#include "main.h"

/**
 * reverse_array - reverses content of int array
 * @a: array
 * @n: size of the array
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	for (i; i < n / 2; i++)

	{
		int temp = *a;

		*a = n[a - 1 - i];
		n[a - 1 - i] = temp;
	}
}
