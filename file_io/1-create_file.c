#include "main.h"

/**
 * create_file - creates a text file with content
 * @filename: name of the file to create
 * @text_content: text content to append into the file
 *
 * Return: int, 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	w = write(fd, text_content, i);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);	
}
