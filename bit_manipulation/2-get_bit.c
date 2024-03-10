#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned integer
 * @index: the start of the bit
 * return: the value of the bit at the index or 1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
