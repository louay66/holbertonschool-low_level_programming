#include <unistd.h>
#include "main.h"

/**
 *puts_half - print secand half of input
 *@str: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int i, c;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	for (c = i / 2 ; c < i ; c++)
	{
	_putchar(str[c]);
	}
	_putchar('\n');

}
