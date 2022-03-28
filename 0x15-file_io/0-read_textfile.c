#include "main.h"
/**
 * read_textfile-read and  print equal size
 *@filename: file that want read
 *@letters: number of byt
 * Return: On success 1.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr = malloc(letters);
	int fd, szbyt;

	if (buffr == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	szbyt = read(fd, buffr, letters);
	write(STDOUT_FILENO, buffr, szbyt);
	free(buffr);
	close(fd);

	return (szbyt);
}
