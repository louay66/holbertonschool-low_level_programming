#include <stdio.h>
#include "main.h"
/**
 * times_table - times table
 * @n : The character to input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int a, b, c, d, e;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			c = a * b;
			f = c / 100;
			d = c / 10;
			e = c % 10;
			if (b < 10)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + e);
			}

		else if (c < 100)
		{
		_putchar(' ');
		_putchar('0' + d);
		_putchar('0' + e);
		}
		else
		{
		_putchar('0' + f);
		_putchar('0' + d);
		_putchar('0' + e);
		}
		if (b < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
			else
		{
			_putchar('\n')
			}
	}
	}
}

