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
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[9]);

	printf("found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("found %d at index: %d\n", 999, linear_seach(array, size, 999));
	return (EXIT_SUCCESS);
}
