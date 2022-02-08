#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_alphabet - writes the character c to stdou
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
	void print_alphabet(void)
	{
	int a;
	char ch;

	for (a = 0 ; a < 10 ; a++)
	{
	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	}
	}
