#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - entry point
 * return: alway EXIT_SUCCESS
 */
int main(void)
{
	listint_t *list, *res;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = creat_list(array, size);
	print_list(list);

	res = jump_list(list, size, 53);
	printf("found %d at index: %lu\n\n", 53, res->index);
	res = jump_list(list, size, 2);
	printf("found %d at index: %lu\n\n", 2, res->index);
	res = jump_list(list, size, 999);
	printf("found %d at index: %p\n", 999, (void *) res);

	free_list(list);
	return (EXIT_SUCCESS);
}
