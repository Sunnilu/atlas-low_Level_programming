#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space memory
 * @str: duplicate of str
 * return: string duplicated
 */

char *_strdup(char *str)
{
	int l = 0, u = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[u])
	{
		u++;
	}

	s = malloc((sizeof(char) * u) + 1);

	if (s == NULL)
		return (NULL);

	while (l < u)
	{
		s[l] = str[l];
		l++;
	}
	s[l] = '\0';
	return (s);
}
