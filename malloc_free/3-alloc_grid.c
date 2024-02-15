#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @int width: element of the grid
 * @int height: second element of the grid
 * return: a 2 dimensional array of intergers
 */

int **alloc_grid(int width, int height)
{
	int j, o, c, k;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		a[j] = malloc(sizeof(int) * width);

		if (a[j] == NULL)
		{
			for (o = j; o >= 0; o--)
			{
				free(a[o]);
			}
			free(a);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (k = 0; k < width; k++)
		{
			a[c][k] = 0;
		}
	}	
	return (a);
}
