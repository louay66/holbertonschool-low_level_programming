#include <unistd.h>
#include "main.h"

/**
 * print_rev -print string revers
 * @s:revers
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int a, b, length;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}
	length = a;
	for (b = length - 1 ; b >= 0 ; b--)
	{
		_putchar(s[b]);
	}
		_putchar('\n');

}
