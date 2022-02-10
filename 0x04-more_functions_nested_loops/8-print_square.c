#include <unistd.h>
#include "main.h"

/**
 * print_square -print square size
 * @size: diagonal
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
	for (a = 0 ; a < size ; a++)
	{

	for (b = 0 ; b < size ; b++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
