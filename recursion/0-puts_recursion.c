#include "main.h"
#include <stdio.h>

/**
 * print a string followed by a new line
 * @s: prints string
 * Return: 0
 */

void _puts_recursion(char *s)

{
	// base case: if the string is empty or null, stop the recursion
	if (*s == '\0')
	{
		return:
	}
	
	// Recursive case: print the current character and move to the next character
	putchar(*s);
	_puts_recursion(s + 1);
}

int main (void)
{
	_puts_recursion("Puts_with_recursion");

	return (0)
}
