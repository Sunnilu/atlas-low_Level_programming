#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - the method used to find an element within the list
 * @array: the pointer to the first element
 * @size: the number of elements in the array
 * @ value: the value to search for
 * return: -1, if the value is NULL or not present in the array
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
 	size_t i;
        for (i = 0; i < size; i++)
	{
		 printf("Comparing %d with %d\n", array[i], value);

		 if (array[i] == value)
		 {
			 return (i);
		 }
	}
	return (-1);
}
