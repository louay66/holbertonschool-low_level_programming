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
	int k, m;

	k = n % 10;
	if (k < 0)
	{
		k = -k;
	}
		m = '0' + k;
	_putchar (m);
	return (k);
}
