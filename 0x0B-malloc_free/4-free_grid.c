#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
