#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *clear_bit-set bit
 *@n:pointer
 *@index:index
 * Return: On success 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);


	*n &= ~(1 << index);

	return (1);

}
