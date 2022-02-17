#include "main.h"
#include <stdio.h>

/**
 *rot13 - check the code
 *@s: pointer
 * Return: Always 0.
 */
char *rot13(char *s)
{

	int i, j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
			if (s[i] == a[j])
			{
				s[i] = b[j];

			}
	}
	return (s);
}
