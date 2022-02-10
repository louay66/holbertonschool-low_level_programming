#include <unistd.h>
#include "main.h"

/**
 * _isdigit - only digt
 * @c: only digt
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
