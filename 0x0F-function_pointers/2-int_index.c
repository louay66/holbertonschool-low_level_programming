#include <string.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index- index
 *@size:size of array
 *@cmp:function
 *@array:array
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
				break;
			}
	}
	return (-1);
}

