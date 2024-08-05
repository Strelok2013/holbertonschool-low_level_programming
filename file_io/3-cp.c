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
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (c);
}

/**
 * open_file - helper function to open a file
 * @filename: name of the file to open
 * @file: which file we're opening, 0 for source, 1 for dest
 *
 * Return: int, -1 on failure, anything else on success.
 */

int open_file(char *filename, char file)
{
	int o = -1;

	if (file == 0)
	{
		o = open(filename, O_RDONLY);
		if (o == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", filename);
			close_file(o);
			exit (98);
		}
		return (o);
	}
	if (file == 1)
	{
		o = open(filename, O_WRONLY | O_TRUNC);
		if (o == -1)
		{
			o = open(filename, O_WRONLY | O_CREAT, 0664);
			if (o == -1)
			{
				dprintf(2, "Error: Can't write to %s\n", filename);
				close_file(o);
				exit(99);
			}
			return (o);
		}
		return (o);
	}
	return (o);
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

ssize_t read_write_from_buffer(int from, int to, void *buffer, ssize_t size)
{
	ssize_t r = 1, w;

	while (r)
	{
		r = read(from, buffer, size);
		w = write(to, buffer, r);
		if (w == -1 || r == -1)
		{
			close_file(from);
			close_file(to);
			return (-1);
		}
			
	}
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
	ssize_t f_from, f_to, wr;
	char *buffer = malloc(sizeof(char) * 1024);
	
	if (ac != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	if (!buffer)
	{
		dprintf(2, "%s\n", "Failed to create rd/wr buffer.\n");
		exit (96);
	}
	f_from = open_file(av[1], 0);
	f_to = open_file(av[2], 1);
	wr = read_write_from_buffer(f_from, f_to, buffer, 1024);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_file(f_from);
	close_file(f_to);
	return (0);
}
