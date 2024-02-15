#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, ASCll text in quotes
 * @s1: newly allocated space in memory
 * @s2: return pointer
 * @n: if greater or equal in length of s2,use entire string
 * return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, o = 0, c = 0, k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[c])
		c++;
	if (n >= c)
		k = j + c;
	else
		k = j + n;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);

	c = 0;
	while (o < k)
	{
		if (o <= j)
			str[o] = s1[o];
		if (o >= j)
		{
			str[o] = s2[c];
			c++;
		}
		o++;

	}
	str[o] = '\0';
	return (str);
}
