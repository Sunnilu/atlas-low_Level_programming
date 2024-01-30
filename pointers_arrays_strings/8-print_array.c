#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to integers
 * @n: number of array
 * return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i< n; i++)
	{
		printf("%d ", a[i]);
	
		if (i != (n - 1))
	{
			printf(" ");
	}
	}
			printf("\n");
}	
