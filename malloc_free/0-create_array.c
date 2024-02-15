#include "main.h"
#include <stdlib.h>

/**
 * create_array of chars and initializes with specific char, return a pointer to the array or Null if it fails. unsigned int size
 * @c: the specific char
 * @size: the size of the the memory to print
 * return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
