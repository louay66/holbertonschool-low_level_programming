#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint-convert binery to decimal
 *@b:pointer
 * Return: On success 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0, a = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i + 1]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	while (i >= 0)
	{
		m += ((b[i] - '0') * a);
		a *= 2;
		i--;
	}

	return (m);
}

