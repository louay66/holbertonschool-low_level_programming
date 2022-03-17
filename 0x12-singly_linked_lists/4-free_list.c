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
	if (head)
	{
		free(head->str);
		free(head->len);
		free(head->next);
		free(head);
	}
