#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_rows - frees rows incase there is a null case
 * @grid: the pointer to the array
 * @count: number of rows to free
 */
void free_rows(int **grid, int count)
{
	int j = 0;

	while (j < count)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array  * of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (0);
	}

	while (i < height)
	{
		j = 0;

		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free_rows(grid, i);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++;
	}
	return (grid);
}
