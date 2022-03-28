#include "main.h"

void cp(const char *file_from, const char *file_to);
/**
 * main - check the code
 *@ac:argc
 *@av:argv
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}

/**
 *cp-cp file_from file_to
 *@file_from:first argv
 *@file_to:second argv
 * Return: On success 1.
 */
void cp(const char *file_from, const char *file_to)
{
	char buff[1024];
	int fdf, fdt, siz;

	fdf = open(file_from, O_RDONLY);
	if (fdf == -1 || file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdt = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	siz = read(fdf, buff, 1024);
		if (siz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	if (siz == 0 || fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file_to);
		exit(99);
	}
	write(fdt, buff, siz);
	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
}
