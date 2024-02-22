#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of person to pring
 * @f: pointer to function
 * return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f !=NULL)
		f(name);
}
