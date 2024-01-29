#include "main.h"

/**
 * rev_string - function that prints a string
 * in reverse
 * @s: the string input
 * return:0
 */

void rev_string(char *s)

{
	int length, i;
	char temp;

	length = 0;

	while (s[length] != '\n')
	{
		length++;
	}
	
	for (i =0; i< length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i -1];
		s[length - i - 1] =temp;
	}
}	
