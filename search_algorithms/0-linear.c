#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - the method used to find an element within the list
 * @array: the pointer to the first element
 * @size: the number of elements in the array
 * @ value: the value to search for
 * return: -1, if the value is NULL or not present in the array
 */

#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    size_t i;

    if (array == NULL) {
        printf("Array is NULL\n");
        return (-1);
    }

    for (i = 0; i < size; i++) {
        if (array[i] == value) {
            printf("Found %d at index: %lu\n", value, i);
            return (i); /* Return the index of the first occurrence */
        }
    }

    printf("Value not found in the array\n");
    return (-1); /* Return -1 if the value is not found */
}


