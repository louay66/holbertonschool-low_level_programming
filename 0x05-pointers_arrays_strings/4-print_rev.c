#include <unistd.h>
#include "main.h"

/**
 * print_rev -print string revers
 * @s:revers
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
