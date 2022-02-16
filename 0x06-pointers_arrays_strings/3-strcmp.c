#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 **_strcmp - comparition
 *@s1:pointer
 *@s2:pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
	return (0);
	}

	else
	{
	return (*s1 - *s2);
	}
}
