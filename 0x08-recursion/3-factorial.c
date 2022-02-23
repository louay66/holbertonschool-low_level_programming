#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *factorial -factorial witout loop
 *@n:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
