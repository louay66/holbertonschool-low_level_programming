#include <unistd.h>
#include "main.h"

/**
 *print_line - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int a;

	if (n > 0)

	{
		for (a = 0 ; a < n ; a++)
		{
			_putchar('_');
		}

	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
