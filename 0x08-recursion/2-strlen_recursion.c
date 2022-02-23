#include <unistd.h>
#include "main.h"

/**
 *_strlen_recursion - count
 *@s: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return  (_strlen_recursion(s + 1) + 1);
}
