#include "lists.h"
/**
 * add_dnodeint - add node
 * @head:dubel linked list
 * @n:value
 * Return: newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t);

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;

	return (newnode);
}
