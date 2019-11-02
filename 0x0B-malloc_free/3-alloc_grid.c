#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"

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

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= width; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i <= height; i++)
	{
		for (j = 0; j <= height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
