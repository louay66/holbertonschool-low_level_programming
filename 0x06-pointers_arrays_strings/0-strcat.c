#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *print_array - str pointer
 *@a:pointer
 *@n:number of array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[c + i] += src[i];
	}
	dest[c + i] = '\0';
	return dest;
}


