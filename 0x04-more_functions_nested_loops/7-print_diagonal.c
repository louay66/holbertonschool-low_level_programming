#include <unistd.h>
#include "main.h"

/**
 * print_diagonal -print diagonal lenth n
 * @n: diagonal
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{

			for (b = 0 ; b < a ; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
