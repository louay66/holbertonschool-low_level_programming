#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint-print linked list
 *@h:name stractur
 * Return: void
 */
size_t print_listint(const listint_t *h)
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

