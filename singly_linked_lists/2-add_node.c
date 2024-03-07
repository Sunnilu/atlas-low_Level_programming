#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @str: the string to be added to the node, needs to be duplicated
 * @head: the original linked list
 * return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return(NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
