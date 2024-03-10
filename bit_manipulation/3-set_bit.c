#include "main.h"
#include <stdio.h>

/**
 * set_bit - functio that sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index of the bit I want to set
 * return: 1 or -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
