#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - ranges of data using indices and ranges
 * @min: minumum value
 * @max: maximum value
 * return: nothing
 */

int *array_range(int min, int max)
{
	int *j, o = 0;
	
	if (min > max)
		return (NULL);

	j = malloc((sizeof(int) * (max - min)) + sizeof (int));
	
	if (j == NULL)
		return (NULL);

	while (min <= max)
	{
		j[o] = min;
		o++;
		min++;
	}
	return (j);


}
