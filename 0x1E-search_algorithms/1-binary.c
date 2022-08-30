#include <stdio.h>
int binary_search_fast(int *array, int low, int high, int value);

/**
 * binary_search-function that search in array
 * @array: array i want to search inside it
 * @size: size of array
 * @value: value i search it
 * Return: the index of the found value,
 * or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (size == 0)
		return (-1);
	return (binary_search_fast(array, 0, size - 1, value));
}

/**
 * binary_search_fast-function that search in array
 * @array: array i want to search inside it
 * @low: first element in array
 * @high: end of array
 * @value: value i search it
 * Return: if value out of range return -1
 * else return index
 */

int binary_search_fast(int *array, int low, int high, int value)
{
	if (array && high >= low)
	{

		int i;
		int mid;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{

			if (i == high)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		mid = ((high - low) / 2) + low;

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			return (binary_search_fast(array, (mid + 1), high, value));

		if (value < array[mid])
			return (binary_search_fast(array, low, mid - 1, value));
	}
	return (-1);
}
