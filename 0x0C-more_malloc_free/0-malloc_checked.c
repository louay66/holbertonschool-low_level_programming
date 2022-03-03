#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **malloc_checked - malloc_checked
 *@s:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

		if (s == NULL)
		exit (98);

	return (s);
}
