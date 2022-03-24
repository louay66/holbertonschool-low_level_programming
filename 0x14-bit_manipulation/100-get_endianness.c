#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *get_endianness-set bit
 * Return: On success 1.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b;

	b = (char *)&x;
	if (*b)
		return (1);
	else
		return (0);
}
