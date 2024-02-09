#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * sqrt_a  - return the natural square root of a number
 *
 * @n: input number to calculate
 * return: the natural square root
 */

int sqrt_recursion(int n)
{

	return _sqrt(n, 1);
}
/** 
 * _sqrt -calculates natural square root
 * @n: the number to calculate the square root
 * @i; iterate number
 * return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return -1;
	if (sqrt == n)
		return i;
	return _sqrt(n, i + 1);
}

int main()
{
	int num = 16;

	int result = sqrt_recursion(num);

	if (result == -1)
		printf("square root not found for %d\n", num);
	else
		printf("square root of %d is %d\n", num, result);
	
	return 0;
}
