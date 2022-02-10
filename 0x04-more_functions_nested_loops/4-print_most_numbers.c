#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
		_putchar('0' + i);
	}
	_putchar ('\n');
}
