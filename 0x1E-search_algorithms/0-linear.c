#include <stdio.h>
/**
 * linear_search-function that search in array
 * @array: array i want to search inside it
 * @size: size of array
 * @value: value i search it
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value)
			{
				return (i);
			}
		}

		return (-1);
	}
	else
		return (-1);
}
