#include <unistd.h>
#include "main.h"

/**
 * print_triangle -print square size
 * @size: diagonal
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int a, b, i;

	if (size <= 0)
	_putchar('\n');
	{
	for (a = 0 ; a < size ; a++)
	{
	for (b = size - a ; b > 1; b--)
	{
	_putchar(' ');
	}
	for (i = a + b ; i >= 1 ; i--)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
