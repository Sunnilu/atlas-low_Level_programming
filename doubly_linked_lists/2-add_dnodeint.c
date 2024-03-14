#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnif of a dnodeint_t list
 * @head: double pointer to the head of the list
 * @n: the integer value to store in the new node
 *
 * return: the address of the new element, or Null if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
