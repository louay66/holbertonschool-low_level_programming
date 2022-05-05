#include "lists.h"
/**
 * print_dlistint - check the code
 * @h:dubel linked list
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	return (count);
}
