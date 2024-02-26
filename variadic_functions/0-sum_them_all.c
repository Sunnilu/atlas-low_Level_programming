#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_of_them_all - returns the sume of all its parameters
 * @n: the number of the parameters passed to the function
 * @...: the variable number of parameters to calculate the sum
 * return: if n == 0 -0
 * or - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
