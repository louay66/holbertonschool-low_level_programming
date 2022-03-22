#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index-insert_nodeint_at_index
 *@head:node
 *@idx:index
 *@n:value
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *ptr1;

	ptr = *head;
	ptr1 = malloc(sizeof(listint_t));

	if (ptr1 == NULL)
		return (NULL);
	ptr1->n = n;
	ptr1->next = NULL;
	if (idx == 0)
	{
		ptr1->next = ptr;
		*head = ptr1;
		return (NULL);
	}
	for (i = 0; i < (idx - 1); i++)
	{

		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	ptr1->next = ptr->next;
	ptr->next = ptr1;
	return (ptr1);
}


