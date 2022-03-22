#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index-get the value equal index
 *@head:node
 *@index:index
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *inode = head;
	unsigned int count = 0;

	if (head->next == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
		{
			inode->n = head->n;
		}
		count++;
		head = head->next;
	}
	return (inode);
}


