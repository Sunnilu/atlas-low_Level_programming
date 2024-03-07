#include <stdio.h>
#include "list.h"
#include <stdlib.h>

/**
 * list_len - the number of elements in a link_t list
 * @h: a linked list
 * return: the number of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while
	{
		h = h->next;
			count ++;
	}

	return (count);
}
