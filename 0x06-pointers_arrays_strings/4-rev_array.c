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
	int i, j, temp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
