#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name of person
 * return: 0
 */

void print_name(char *name, void (*f)(char *))
void print_string(char *str)
{
	printf("%s\n", str);
}
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}
int main()
{
	char name[] = "Suntha Lucas";

	print_name(name, print_string);
	return (0);
}
