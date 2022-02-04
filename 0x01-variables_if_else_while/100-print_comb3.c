#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * main - Entry point
 * *
 * * Return: Always 0 (Success)
  */
int main(void)
{
	int i, a, b;

	i = 0;
	while (i < 100)
	{
	a = i % 10;
	b = i / 10;
	if (a < b)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (i < 89)
		{
			putchar(44);
			putchar(32);
		}

	}
	i++;
	}
	putchar('\n');
	return (0);
}
