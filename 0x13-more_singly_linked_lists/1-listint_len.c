#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len-count the number of elment
 *@h:name stractur
 * Return: void
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
