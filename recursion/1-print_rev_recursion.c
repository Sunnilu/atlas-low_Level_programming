#include <stdio.h>

/**
 * print string in reverse
 * @s: string
 * return: str
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}

int main()
{
	char str[] = "Colton_ Walker";
	_print_rev_recursion(str);
	printf("\n");
	return (0);
}
