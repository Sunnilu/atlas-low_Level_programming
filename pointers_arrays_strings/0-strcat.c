#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _strcat -  concatenates two strings
 * @:src: the source string
 * @:dest: the destination string
 * return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{	
		int dlen = 0, i;

		while (dest[dlen])
			dlen++;
		for (i = 0; src[i] != 0; i++)
		{
			dest[dlen] = src[i];
			dlen++;
		}
		dest[dlen] = '\0';

		return (dest);
}					
