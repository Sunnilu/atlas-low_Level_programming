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
    int i;

    if (array == NULL)
	    return (-1);

    for (i = 0; i < (int)size; i++)
		{
			printf("value checked array[%u] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
        }           
    		return (-1);
}



