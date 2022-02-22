#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - function locates the first occurrence
 *@s:s is the C string to be scanned.
 *@accept:This is the world to be searched in str
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
		if (s[i] == accept[j])
		{
			return (s + i);
		}
	}
	}
	return ('\0');
}
