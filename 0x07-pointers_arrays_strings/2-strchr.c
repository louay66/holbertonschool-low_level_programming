#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 **_strchr - searches for the first occurrence of the character c
 *@s: This is the C string to be scanned.
 *@c:This is the character to be searched in str.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

