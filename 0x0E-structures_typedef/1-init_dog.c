#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog - initialize strcur
 *@d:new strufdct
 *@name:name of dog
 *@owner:ownerof dog
 *@age:age of dog
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
