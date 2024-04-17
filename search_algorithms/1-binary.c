#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - searches for a value in a sorted array
* @array: the pointer to the first eement of the array to search
* @size: the number of elements in the array
* @value: the value to search for
*/

int binary_search(int *array, size_t size, int value) {
   int left, right, mid;
   size_t i;

    if (array == NULL) {
        printf("Array is NULL\n");
        return -1;
    }

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right) {
       
        printf("Searching in array: ");
        for (i = left; i <= (size_t)right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        mid = left + (size_t)(right - left) / 2;

        if (array[mid] == value) {
            printf("Found at index: %d\n", mid);
            return mid;
        }

        if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Value not found in the array\n");
    return -1; 
}


    

