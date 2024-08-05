#include "main.h"

/**
 * close_file - helper function that closes a file
 * @fd: file descriptor to close
 *
 * Return: int,  -1 on failure, something else on success.
 */

int close_file(int fd)
{
	int c;
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (c);
}

/**
 * read_write_from_buffer - helper function that reads and writes
 * @from:
 * @to:
 * @buffer:
 * @size:
 *
 * Description: reads 1024 bytes from source file into buffer, then writes said bytes to dest file
 * Return: ssize_t, number of bytes written. -1 on failure
 */

int read_write_from_buffer(int from, int to, void *buffer, ssize_t size)
{
	int r = 1, w;

	return (r);
}

/**
 * main - entry point
 * @ac: number of args
 * @av: pointer to array of pointers containing arg values
 *
 * Return: Always 0
 */

int main (int ac, char **av)
{
	// Rewrite
	int f_from, f_to;
	char *buffer = malloc(sizeof(1024));

	if (ac != 3)
	{
		//first fail
	}
	if (!buffer)
	{
		// exit 99, can't write
	}
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	// while loop which reads and writes.
	// checking to and from happens in read/write loop :P
	
}
