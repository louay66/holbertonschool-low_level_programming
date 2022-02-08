#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - writes the character  to stdou
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int h, m, a, b, c, d;

	for (h = 0 ; h < 24 ; h++)
	{
		a = h / 10;
		b = h % 10;
	for (m = 0 ; m < 60 ; m++)
	{
		c = m / 10;
		d = m % 10;
		_putchar('0' + a);
		_putchar('0' + b);
		_putchar(':');
		_putchar('0' + c);
		_putchar('0' + d);
		_putchar('\n');
	}
	}
}
