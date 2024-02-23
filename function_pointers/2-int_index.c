#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: a place to store in a row
 * @size: the number 
 * return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int d = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (d < size)
			{
				if (cmp(array[d]))
					return (d);
				d++;
			}
		}
	}
	return (-1);
}
