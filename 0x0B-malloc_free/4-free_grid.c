#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: double pointer to the grid
 * @height: the number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
