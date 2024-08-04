#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int main (int ac, char **av)
{
	ssize_t f_from, f_to, w, r;
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
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(f_from);
		exit (98);
	}
	f_to = open(av[2], O_WRONLY | O_TRUNC);
	if (f_to == -1)
	{
		close(f_to);
		f_to = open(av[2], O_WRONLY | O_CREAT, 0664);
		if (f_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(f_to);
			exit(99);
		}
	}
	r = read(f_from, buffer, 1024);
	while (r)
	{
		r = read(f_from, buffer, 1024);
		w = write(f_to, buffer, 1024);
		if (w == -1 || r == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(f_from);
			close(f_to);
			exit (99);
		}
	}
	
	/*if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %ld", f_to);
		exit (100);
		}*/
	close(f_from);
	close(f_to);
	return (0);
}
