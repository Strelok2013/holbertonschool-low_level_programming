#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append to
 * @text_content: text content to append
 *
 * Return: int, 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	w = write(fd, text_content, sizeof(text_content));
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
