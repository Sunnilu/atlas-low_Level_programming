#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t
 * @head: the head of the list
 * return: NULL if it fails
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
			head = next;
	}
}
