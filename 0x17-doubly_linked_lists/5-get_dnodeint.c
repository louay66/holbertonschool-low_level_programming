#include "lists.h"
/**
 * add_dnodeint - add node
 * @head:dubel linked list
 * @index:index of node
 * Return: newnode
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}


