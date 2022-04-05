#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a 2D array of integers
 * @width: width of array
 * @height: height of the array
 *
 * Return: pointer to the created matrix (success)
 * otherwise return NULL (error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;
	int k = width;
	int p = height;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < p)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		while (j < k)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
