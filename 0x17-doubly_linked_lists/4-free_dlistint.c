#include "lists.h"
/**
 * free_dlistint - free node
 * @head:dubel linked list
 * Return: newnode
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
