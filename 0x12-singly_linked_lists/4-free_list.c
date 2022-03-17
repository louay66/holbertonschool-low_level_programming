#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_list-free strctur
 *@head:node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
