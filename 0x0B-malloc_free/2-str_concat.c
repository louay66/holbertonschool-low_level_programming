#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - dublicated
 *@s1:string
 *@s2:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	int k, i;
	char *a;

	if (s1 == NULL)
		strlen(s1) = 0;
	if (s1 == NULL)
		strlen(s2) = 0;

	k = strlen(s1) + strlen(s2) + 1;
	a = (char *)malloc(sizeof(char) * k + 1);
	if (a == NULL)
	return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < strlen(s2); i++)
	{
		s[i + strlen(s1)] = s2[i];
	}
	s[strlen(s1) + strlen(s2)] ='\0';
	return (s);
}
