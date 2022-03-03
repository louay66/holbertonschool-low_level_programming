#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocaited memoire
 *@nmemb:number  
 *@size:number
 * Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		x[i] = '\0';
	}
	return (x);
}
