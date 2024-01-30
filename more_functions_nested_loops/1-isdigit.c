#include "main.h"
#include <stdio.h>

/**
 * write a function that checks for a digit 0 through 9
 * @c: is a digit
 * return: 0
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
