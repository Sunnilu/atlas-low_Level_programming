#include <stdio.h>

/**
 * _sqrt_recursion that returns the natural square root of a number
 * @n: the natural square root
 * return: square root function should return -1
 */

int check_square(int x, int n)
{
	if (x * x == n) {
		return 1;
	}
	if (x * x > n)
	{
		return 0;
	}
	return check_square(x + 1, n);
}

int _sqrt_recursion(int n)
	{
	return check_square(0, n);
}

int main()
{
	int number = 25;

	int result = _sqrt_recursion(number);

	if (result == 1)
	{
	printf("the number %d has a natural square root.\n",number);
	}
	else
	{
	printf("the number %d does not have a natural square root,\n", number);
	}
	return (0);
}
