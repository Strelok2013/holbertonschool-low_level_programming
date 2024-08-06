#include "main.h"

/**
 * read_textfile - reads text from a file and outputs it to stdOUT
 * @filename: name of the file to read from
 * @letters: how many bytes to read from the file
 *
 * Return: ssize_t, the amount of characters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, count = 0, count2 = 0;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	count = read(fd, buffer, letters);
	count2 = write(STDOUT_FILENO, buffer, count);
	if (fd == -1 || count == -1 || count == -1 || count != count2)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (count2);
}
