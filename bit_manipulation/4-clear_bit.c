#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: indext of the bit I want to set
 * return: 1 of it works or -1 if it doesn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
