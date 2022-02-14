#include <unistd.h>
#include "main.h"

/**
 * rev_string-revers string
 * @s: evrers string
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	char v;
	int a, b, length;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}
	length = a - 1;

	for (b = 0 ; b < a / 2 ; b++)
	{
		v = s[b];
		s[b] = s[length];
		s[a--] = v;

	}
	_putchar('\n');
}
