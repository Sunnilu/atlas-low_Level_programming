#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at te end of a list_t list
 * @str: string needs to be duplicated
 * @head: head of the link
 * return: add of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t n,
	
	new_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (n = 0; str[n]; n++);

	new_node->len = n;
	new_node->next = NULL;
	add_node->*head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
