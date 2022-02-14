#include <unistd.h>
#include "main.h"

/**
 *swap_int - a and b tow pointer
 *@a:first pointer
 *@b:second pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
