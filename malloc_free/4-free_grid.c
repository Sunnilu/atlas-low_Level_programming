#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address of the two dimensional girnd
 * @width: with of the grid
 * @heigt: height of the grid
 * return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{	
		free(grid[j]);
	}
	
	free(grid);
}
