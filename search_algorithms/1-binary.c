#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - searches for a value in a sorted array
* @array: the pointer to the first eement of the array to search
* @size: the number of elements in the array
* @value: the value to search for
*/

int binary_search(int *array, size_t size, int value) {
   size_t i;

    if (array == NULL) {
        printf("Array is NULL\n");
        return -1;
    }

    left = 0;
    right = size - 1;

    while (left <= right) {
        
        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid;
        }

        if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}  

