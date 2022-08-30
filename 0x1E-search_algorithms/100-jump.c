#include <stdio.h>
#include <math.h>
int over_range(int *array, size_t len, int jump);

/**
 * jump_search-function that search in array
 * @array: array i want to search inside it
 * @size: size of array
 * @value: value i search it
 *
 * Return: if value out of range return -1
 * else return index
 */

int jump_search(int *array, size_t size, int value)
{
	if (array || size != 0)
	{
		int jump = sqrt(size);
		int check = 0;
		size_t len = size - 1;
		size_t k, i = 0;

		if (value > array[len])
		{

			return (over_range(array, len, jump));
		}

		while (i < size)
		{

			if (value <= array[i])
			{

				printf("Value found between indexes [%ld] and [%ld]\n", (i - jump), i);
				k = (i - jump);
				while (k <= i)
				{
					printf("Value checked array[%ld] = [%d]\n", k, array[k]);
					if (value == array[k])
					{
						check += 1;
						return (array[k]);
					}

					k++;
				}
				if (check == 0)
				{
					return (-1);
				}
			}
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i += jump;
		}
	}
	return (-1);
}

/**
 * over_range-function that use for worst case
 * @array: array i want to search inside it
 * @len: size of array
 * @jump: jump
 *
 * Return: if value out of range return -1
 * else return index
 */
int over_range(int *array, size_t len, int jump)
{
	size_t j;

	for (j = 0; j <= len; j += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (j == (len))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", len, len + jump);
			printf("Value checked array[%ld] = [%d]\n", len, array[len]);
			return (-1);
		}
	}
	return (0);
}
