#include "search_algos.h"

/**
 * linear_search - searches value in array of integers using linear search
 * algorithm
 *
 * @array: array to search
 * @size: number of elements in array
 * @value: element to search
 *
 * Return: first index where `value` is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
