#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_listint-sum of list
 *@head:node
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	int k = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		k += head->n;
		head = head->next;
		i++;
	}
	return (k);
}
