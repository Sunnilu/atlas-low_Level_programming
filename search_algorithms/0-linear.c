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
	size_t i; /* declare i before the loop */
    if (array == NULL) {
        printf("Array is NULL\n");
        return -1;
    }

    for (i = 0; i < size; i++) {
        printf("Value being compared: %d\n", array[i]);
        if (array[i] == value) {
            return i; /* Value found, return its index */ 
        }
    }
    
    printf("Value not found in the array\n");
    return -1; /* value not found */ 
}