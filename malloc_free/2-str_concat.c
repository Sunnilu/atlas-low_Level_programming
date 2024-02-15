#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings any size
 * @s1: returned pointer to concatenate
 * @s2: second pointer to concatenate
 * return: both strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, o = 0, c = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[o])
		o++;

	k = j + o;
	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	o = 0;

	while (c < k)
	{
		if (c <= j)
			s[c] = s1[c];

		if (c >= j)
		{
			s[c]  = s2[o];
			o++;
		}
		c++;
	}

	s[c] = '\0';
	return (s);
}
