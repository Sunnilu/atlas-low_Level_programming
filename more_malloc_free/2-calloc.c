#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - returns a pointer to allocated memory or NULL
 * @nmemb: number of elements
 * @size: bytes each and returns a pointer to allocated memory
 * return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, s = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = nmemb * size;
	p = malloc(s);
	
	if (p == NULL)
		return(NULL);
	while (j < s)
	{
		p[j] = 0;
		j++;
	}
	return (p);
}
