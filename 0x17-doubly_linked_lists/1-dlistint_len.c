#include "lists.h"
/**
 * dlistint_len - print number of elment
 * @h:dubel linked list
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;

	}
	return (count);
}
