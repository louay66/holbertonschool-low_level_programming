#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_binary-convert decimal to binary
 *@n:pointer
 * Return: On success 1.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	printf("%ld", n & 1);
}
