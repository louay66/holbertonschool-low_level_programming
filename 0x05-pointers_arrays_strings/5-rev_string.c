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
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}

	for (b = a - 1 ; b >= a / 2 ; b--)
	{
		v = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = v;

	}

}
