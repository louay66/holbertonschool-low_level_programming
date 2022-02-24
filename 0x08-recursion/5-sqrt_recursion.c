#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *sqrtroot -sqrt
 *@i:number
 *@n:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sqrtroot(int n, int i)
{
	if (n < i)
	{
		return (-1);
	}

	else if (i * i == n)
	{
		return (i);
	}

	i += 1;
	return (sqrtroot(n, i));
}

/**
 *_sqrt_recursion -sqrt root
 *@n:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrtroot(n, 1));
}

