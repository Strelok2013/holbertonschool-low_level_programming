#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (text_content)
		w = write(fd, text_content, sizeof(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
	
}
