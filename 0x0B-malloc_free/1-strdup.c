#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup - dublicated
 *@str:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int k, i;
	char *x;

	for (k = 0; str[k] < '\0'; k++)
	{
	}
	x = (char *)malloc(str[k] * sizeof(char));
	if (str[k] == '\0')
		return (NULL);
	for (i = 0; i < str[i]; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
