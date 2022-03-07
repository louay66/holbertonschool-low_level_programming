#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - connected two string
 *@d:new struct
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age != '\0')
		printf("age: %f\n", d->age);
	else
		printf("age: (nil)\n");
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
	}
	else
		return;
}
