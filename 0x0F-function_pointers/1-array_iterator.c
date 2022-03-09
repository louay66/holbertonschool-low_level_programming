#include <string.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator-array interator
 *@size:size of array
 *@action:function
 *@array:array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && size > 0 && array != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
