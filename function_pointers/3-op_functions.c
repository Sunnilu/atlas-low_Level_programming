#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum
 * @a: results
 * @b: results
 * return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - returns the product
 * @a: results
 * @b: results
 * return: nothing
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - return the difference of a and b
 * @a: results
 * @b: results
 * return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mod - returns the remainder of the division
 * @a: results
 * @b: results
 * return: nothing
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return(a % b);
}
/**
 * op_div - returns the remainder of the division
 * @a: results
 * @b: results
 * return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
