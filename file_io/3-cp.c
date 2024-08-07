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
	int r, w;

	do{
		if (from == -1 || r == -1)
		{
			free(buffer);
			return (-1);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			free(buffer);
			return (-2);
		}
		r = read(from, buffer, size);
	} while (r > 0);
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
	int f_from, f_to, wr;
	char *buffer = malloc(sizeof(1024));

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = read_write_from_buffer(f_from, f_to, buffer, 1024);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (wr == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_file(f_from);
	close_file(f_to);
	return (0);
	
}
