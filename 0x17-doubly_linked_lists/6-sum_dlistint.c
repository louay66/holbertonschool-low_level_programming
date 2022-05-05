#include "lists.h"
/**
 * sum_dlistint - add node
 * @head:dubel linked list
 * Return: newnode
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;
	int b = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		a += head->n;
		head = head->next;
		b++;
	}
	return (a);
}
