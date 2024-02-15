#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @unsigned: returns a pointer
 * @int: b
 * return: value
 */

void *malloc_checked(unsigned int b)
{
	void *ptr  = malloc(b);
	
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed. \n");
		exit(98);
	}
	return ptr;
}

int main()
{
	unsigned int size = 100;
	void *mem_block = malloc_checked(size);

	free(mem_block);
	return (0);
}
