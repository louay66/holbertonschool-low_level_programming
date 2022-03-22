#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *delete_nodeint_at_index-get the value equal index
 *@head:node
 *@index:index
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr1 = *head;
	unsigned int i;

	if (ptr1 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (ptr1->next ==NULL)
			return (-1);
		ptr1 = ptr1->next;
	}
	ptr = ptr1->next;
	ptr1->next = ptr->next;
	free(ptr);
	return (1);
}
