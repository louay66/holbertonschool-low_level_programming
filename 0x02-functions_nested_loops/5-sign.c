#include <stdio.h>
#include "main.h"
/**
 *print_sign - writes the character n to stdou
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		_putchar('+');
	else if (n < 0)
		return (0);
		_putchar('0');
	else
		return (-1);
	_putchar('-');
}
