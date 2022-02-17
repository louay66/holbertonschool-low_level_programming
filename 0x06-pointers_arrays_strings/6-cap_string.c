#include <unistd.h>
#include "main.h"

/**
 **cap_string-src overwrite in dest
 *@aa:input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *aa)
{
	int i;

	for (i = 0 ; aa[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if ((aa[i] >= 97 && aa[i] <= 122))
				aa[i] = aa[i] - 32;
		}
		else if (aa[i] == ' ')
		{
			i++;
			if (aa[i] >= 'a' && aa[i] <= 'z')
			{
				aa[i] = aa[i] - 32;
			}
		}
		else
		{
			if (aa[i] >= 'A' && aa[i] <= 'Z')
				aa[i] = aa[i] + 32;
		}
	}
	return (aa);
}

