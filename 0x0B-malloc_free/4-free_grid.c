#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: this is the array
 * @height: this is the height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = height - 1;

	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
