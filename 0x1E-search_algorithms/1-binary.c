#include "search_algos.h"

/**
 * print_array - print array elements
 *
 * @array: array to print
 * @left: leftmost element in given array
 * @right: rightmost element in given array
 *
 * Return: nothing
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	for ( ; left <= right; left++)
	{
		if (left != right)
			printf("%d, ", array[left]);
		else
			printf("%d\n", array[left]);
	}
}


/**
 * binary_search - searches value in sorted array of integers using binary
 * search algorithm
 *
 * @array: array to search
 * @size: length of array
 * @value: value to search
 *
 * Return: index of `value`, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}
