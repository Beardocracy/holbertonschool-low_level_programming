#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"

/**
 * free_grids - frees a 2 dimensional array
 * @grid: double pointer to the grid
 * @y: the number of rows to free
 */
void free_grids(int **grid, int y)
{
	int i;

	for (i = 0; i < y; i++)
		free(grid[i]);
	free(grid);
}
/**
 * alloc_grid - allocates memory for a grid and returns a pointer.
 * @width: the width of the grid.
 * @height: the height of the grid.
 * Return: a pointer to the grid.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free_grids(grid, i);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
