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


	while (head != NULL)
	{
		head = head->next;
		free(head->str)
		free(head);
	}
}
