#include <unistd.h>
#include "main.h"

/**
 *reset_to_98 - writes the character n to stdout
 *@n: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

