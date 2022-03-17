#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len-count the number of elment
 *@h:name stractur
 * Return: void
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	
	while(h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
