#include <unistd.h>
#include "main.h"

/**
 *reset_to_98 - writes the character n to stdout
 *@n: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
