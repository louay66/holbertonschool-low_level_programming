#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list-print linked list
 *@h:name stractur
 * Return: void
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}

