#include <unistd.h>
#include "main1.h"
#include <math.h>

/**
 *mul - a * b
 * @a: the first number
 * @b: the second number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	return (a * b);
}
