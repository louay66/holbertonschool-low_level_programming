#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - writes the character c to stdou
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
	void print_alphabet(void)
	{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
