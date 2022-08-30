#include <stdio.h>
/**
 * linear_search-function that search in array
 * @array: array i want to search inside it
 * @size: size of array
 * @value: value i search it
 *
 * Return: if value out of range return -1
 * else return index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array && size != 0)
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
	{
		return (-1);
	}
}
