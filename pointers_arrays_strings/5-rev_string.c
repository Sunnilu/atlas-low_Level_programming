#include "main.h"


/**
 * rev_string - function that prints a string
 * in reverse mode
 * @s: the string input
 * return:0
 */

void rev_string(char *s)
{
	int length;
	char temp;
        int i;

	length = 0;

	
	while (s[length] != '\0')
	{
		length++;
	}
		
	for (i = 0; i < length / 2; i++)
	{					
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i -1] = temp;	
	}
}	
