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
	unsigned int f = 1;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *new = *h;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		add_dnodeint(&newnode, n);
	}
	while (f < idx)
	{
		if (new == NULL || new->next == NULL)
			return (NULL);
		new = new->next;
		f++;
	}
	newnode->next = new->next;
	new->next = newnode;
	return (newnode);
}
