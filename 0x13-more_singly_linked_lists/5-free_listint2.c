#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint2-free strctur
 *@head:node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = temp->next;
	}

	*head = NULL;
}
