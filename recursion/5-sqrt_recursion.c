#include "main.h"

/**
 * sqrt_a  - return the natural square root of a number
 *
 * @n: input number
 * return: square root or  -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/** 
 * _sqrt_ecursion - returns the natural square root of a number
 * @n: the inmput number
 * return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 0));
}
