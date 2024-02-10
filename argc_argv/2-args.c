#include "main.h"
#include <stdio.h>

/**
 * print all arguments it receives
 * @argc: count argument
 * @argv: argument vector
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
