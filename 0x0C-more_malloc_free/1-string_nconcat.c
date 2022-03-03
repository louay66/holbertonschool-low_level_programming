#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - connected two string 
 *@s1:string
 *@s2:string
 *@n:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	
	char *a;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		a = (char *)malloc(sizeof (strlen(s1)) + sizeof (strlen(s2)) + 1);

	a = (char *)malloc(sizeof (strlen(s1)) + sizeof (n) + 1);

	if (a == NULL)
		return (NULL);

	strncat(s1, s2, n);

	return (a);
}
