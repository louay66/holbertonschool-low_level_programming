#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint-free strctur
 *@head:node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp
		while (head != NULL)
		{ 
			temp = head;
			head = head->next;
			free(temp);
		}
}
