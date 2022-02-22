#include "main.h"
#include <stdio.h>

/**
 * *strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return:0.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
		{
			if (needle[j])
				return (&haystack[i]);
		}
	}
	return (0);
}
