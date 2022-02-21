#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 **_memcpy - overwrite parte of  data stractar
 *@dest:array
 *@src:the new value
 *@n: numbar of the value overwrite
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
