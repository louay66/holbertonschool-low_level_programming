#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *flip_bits-set bit
 *@n:pointer
 *@m:index
 * Return: On success 1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, xor = n ^ m;

	while (xor)
	{
	count += (xor & 1);
	xor >>= 1;
	}
	return (count);
}
