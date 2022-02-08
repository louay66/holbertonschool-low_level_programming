#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - writes the character n to stdou
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar (n);
	return (n);
}
