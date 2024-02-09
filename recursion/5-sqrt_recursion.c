#include "main.h"

/**
 * sqrt_a  - return the natural square root of a number
 * @a: input number
 * @b: iterator
 * @n: input number to calculate
 * return: the natural square root -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt -recursion - returns the natural square root of a number
 * @n: the input number
 * return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
