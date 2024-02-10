#include "main.h"
#include <stdio.h>

/**
 * number of arguments passed
 * @argc: count arguments
 * @argv: argument vector
 * return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
