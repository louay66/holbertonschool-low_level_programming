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
	int a, b;

	for (a = 0 ; a < 1024 ; a++)
	{
		if (a % 5 == 0 || a % 3 == 0)
		{
			b = b + a;
		}
	}
		printf("%d\n", b);
	return (0);
}
