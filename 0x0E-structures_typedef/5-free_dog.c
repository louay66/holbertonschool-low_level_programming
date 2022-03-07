#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - connected two string
 *@d:new struct
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
