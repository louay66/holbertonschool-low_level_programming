#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_node-new node
 *@head:node
 *@str: string
 * Return: void
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
