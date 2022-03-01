#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - create array and mange memoiry
 *@size:number  of case
 *@c: vlue
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = (char *)malloc(size * sizeof(char));


	if (size == 0)
		return ('\0');
	else if (size == '\0')
		return ('\0');



	for (i = 0 ; i < size ; i++)
	{
		x[i] = c;
	}
	return (x);
}
