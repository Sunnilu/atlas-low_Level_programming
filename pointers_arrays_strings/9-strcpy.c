#include "main.h"

/**
 * _strcpy - pointer to a character
 * @ dest: string 1 pointer to a char
 * @scr: string 2 pointer to a char
 * return: character (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
			dest[i] = '\0';

		return (dest);
}
