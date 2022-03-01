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

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] < '\0'; k++)
	{
	}
	x = (char *)malloc(k * sizeof(char) + 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		x[i] = str[i];
	}
	x[i] = '\0';
	return (x);
}
