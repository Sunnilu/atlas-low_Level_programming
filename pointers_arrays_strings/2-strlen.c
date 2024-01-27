#include <stdio.h>

/**
 * write a function that returns the length of a string
 * return:0
 */

int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0') {
		len++;
		s++;
	}
	return len;
}
