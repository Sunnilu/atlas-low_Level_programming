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
		0, 1, 2, 5, 5, 6, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("found %d at index: %d\n\n", 8, linear_search(array, size, 8));
	printf("found %d at index: %d\n\n", 5, linear_search(array, size, 5));
	printf("found %d at index: %d\n", 999, linear_seach(array, size, 999));
	return (EXIT_SUCCESS);
}

