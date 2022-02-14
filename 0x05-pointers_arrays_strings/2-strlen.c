#include <unistd.h>
#include "main.h"

/**
 *_strlen - pointer s
 *@s: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int len = 0;

	while  (*s != '\0')
	{
		len++;
		s++;
	}
		return (len);
}

