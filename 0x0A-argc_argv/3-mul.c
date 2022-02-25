#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - check the code
 *   *@argc: argument count
 *    *@argv: argument value
 *     * Return: Always 0.
 *      */
int main(int argc, char *argv[])
{
	int i, r = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc ; i++)
		{
			r *= atoi(argv[i]);
		}
	}
	printf("%d\n", r);

	return (0);
}
