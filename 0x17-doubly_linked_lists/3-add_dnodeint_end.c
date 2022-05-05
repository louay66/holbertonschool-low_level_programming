#include "lists.h"
/**
 * add_dnodeint_end - add node
 * @head:dubel linked list
 * @n:value
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}

