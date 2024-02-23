#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: the size of the array
 * @array: the place to store the stuff in a row
 * @action: a pointer to the function
 * return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j = 0;
	
	if (array != NULL && action != NULL && size > 0)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}

