#include "lists.h"
/**
 * insert_dnodeint_at_index - insert  node in index
 * @h:dubel linked list
 * @idx:index
 * @n:value
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int f = 0;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *new = *h;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (f < idx)
	{
		if (f == idx -1)
		{
			if (new->next == NULL)
				return (add_dnodeint_end(h, n));
		newnode->next = new->next;
		newnode->prev = new;
		new->next->prev = newnode;
		new->next = newnode;
		f++;
		return (newnode);
		}
		else
			new = new->next;
	}
	return (NULL);
}
