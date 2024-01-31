#include "main.h"
#include <stdio.h>

/**
 * writes a function that concatenates two strings
 * @:src
 * @:dest
 * return: (\0)
 */

char *_strcat(char *dest, char *src);

int main()

	char* my_strcat(char *dest, char *src) {
		while (*dest) {
			dest++;
		}		
		while (*src) {
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';

		return dest;
		}

		char s1[98] = "Hello";
		char s2[] = "World";
		char *ptr = my strcat(s1, s2);

		printf("%s\n", s1
		
		return 0;
}				
