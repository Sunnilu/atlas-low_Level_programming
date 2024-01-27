#include "main.h"

/**
 * swap values of two integers using a and b
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
