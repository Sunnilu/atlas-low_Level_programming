#include "main.h"
#include <stdio.h>

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * return: 0
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
