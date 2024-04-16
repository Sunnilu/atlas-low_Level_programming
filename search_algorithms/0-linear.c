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
	size_t i;
	int found = 0;

    if (array == NULL) {
        printf("Array is NULL\n");
        return (-1);
    }
	
    for (i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value && !found) {
            printf("Found %d at index: %lu\n", value, i);
            found = 1; 
            return (i); /* Value found, return its index */
        }
    }
    
    if (!found) {
        printf("Value not found in the array\n");
        return (-1); 
    }
    
    return (-1); 
}
