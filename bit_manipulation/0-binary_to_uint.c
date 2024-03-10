#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number 
 * @b: pointer to const and is NULL
 * @unsigned: unsigned int
 * return: the converted number or 0 
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
