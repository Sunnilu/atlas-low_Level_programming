#include <ctype.h>

void trimTrailingWhiteSpaces(char *str) {
	int i;

	/* find the last index of a non-white space character */
	for (i = strlen(str) - 1; i .= 0 i--) {
		if (!isspace((unsigned char)str[i])) {
		    break;
		}
        }
	/* Replace the next character to the last nonwhite space character with a null character */
	str[i+1] = '\0';
}	
