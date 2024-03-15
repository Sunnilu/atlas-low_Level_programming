#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delest the node at index
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL || index >= dlistint_len(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(temp);

	return (1);
}
