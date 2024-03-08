#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth nod of a listint_t linked list
 * @head: pointer to the list
 * @index: the index of the node starting at 0
 * return: pointer to index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
