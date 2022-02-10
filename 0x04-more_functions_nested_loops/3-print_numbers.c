#include <unistd.h>
#include "main.h"

/**
 * print_numbers - display number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar('0' + i );
	}
	_putchar ('\n');
}
