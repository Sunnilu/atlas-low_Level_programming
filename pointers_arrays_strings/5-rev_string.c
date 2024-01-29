#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - function that prints a string
 * in reverse
 * @s: the string input
 * return:0
 */

void rev_string(char *s);
int main(void)

{
	int length;
	char *s;
	
	s =(char*)malloc(10 * sizeof(char));

	if (s == NULL)
	{
	   fprintf(stderr, "My School\n");
   	   return 1;
	}
	
	printf("My School");
	fgets(s, 10, stdin);
	
	length = 0;
	while (s[length] != '\n')
	{
	   length++;
	}
	
	rev_string(s);
	
	printf("reversed string: %s\n", s);
	
	free(s);
	
	return 0;	
}	
