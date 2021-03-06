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
	listint_t *nnode, *cnode;

	if (head == NULL)
		return;
	cnode = *head;

	while (cnode)
	{
		nnode = cnode;
		cnode = cnode->next;
		free(nnode);
	}

	*head = NULL;
}
