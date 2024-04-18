#include <stdio.h>
#include <stdlib.h>
#include  "../search_algros.h"

/**
 * main - entry point
 * return: always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = { 
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("found %d at index: %d\n\n", 62, linear_search(array, size, 62));
	printf("found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("found %d at index: %d\n", 999, linear_seach(array, size, 999));
	return (EXIT_SUCCESS);
}

