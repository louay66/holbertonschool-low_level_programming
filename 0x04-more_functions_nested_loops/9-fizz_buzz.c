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
	int a;

	for (a = 1 ; a < 100 ; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
