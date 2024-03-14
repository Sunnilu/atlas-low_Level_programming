#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t link list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * return: the nth node of the list, or NULL if the nth fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
