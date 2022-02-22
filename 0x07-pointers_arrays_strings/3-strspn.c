#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *_strspn - the string pointed to by str1 that is made up
 *@s:string to be scanned
 *@accept:string containing the
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{


			if (s[i] == accept[j])
			{
				break;
			}
	}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (i);
}
