#include <unistd.h>
#include "main.h"

/**
 * *_strcpy -pointer
 * @dest: pointer
 * @src:pointer
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; b < a ; b++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
