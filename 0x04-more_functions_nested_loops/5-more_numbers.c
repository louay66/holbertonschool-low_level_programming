#include <unistd.h>
#include "main.h"

/**
 *more_numbers - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0 ; b < 10 ; b++)
	{
	for (a = 0 ; a < 15 ; a++)
	{
	if (a > 9)
	{
	_putchar('0' + (a / 10));
	}
	_putchar('0' + (a % 10));
	}
	 _putchar('\n');

	}
}
