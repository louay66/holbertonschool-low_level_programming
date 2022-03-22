#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint-free strctur
 *@head:node
 *Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int  i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);
	return (i);

}

