#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, n, b = 1, c = 0;

	for (a = 0 ; a < 50 ; a++)
	{
		n = b + c;
		printf("%d, ", n);
		c = b;
		b = n;
	}
	return (0);
}
