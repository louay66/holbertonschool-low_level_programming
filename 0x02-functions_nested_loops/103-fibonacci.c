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

		unsigned long a, n, b = 1, c = 0;

		do

	{
		n = b + c;
		if (n % 2 == 0)
		{
			a = a + n;
		}
		c = b;
		b = n;
	}
		while (n < 2500000);
		printf("%lu\n", a);

	return (0);
}
