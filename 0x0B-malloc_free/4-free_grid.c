#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * description: frees memory grid
 * return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
