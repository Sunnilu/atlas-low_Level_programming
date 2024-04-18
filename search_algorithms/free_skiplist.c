#include <stdlib.h>
#include "../search_algros.h"

/**
 * free_skiplist - deallocates a singly linked list
 * @list: pointer to the linked list to be freed
 */
void free_skiplist(skiplist_t *list)
{
	skip_list_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
