#include "main.h"
#include <stdio.h>

/**
 * print a string followed by a new line
 * @s: prints string
 * Return: 0
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
	
	putchar(*s);
	_puts_recursion(s + 1);
}

int main()
{
	char str[] = "Puts with recursion!";
	_puts_recursion(str);	
	return (0);
}
