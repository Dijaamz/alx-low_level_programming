#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and  print to STDOUT.
 * @filename: text file
 * @letters: number of letters to be read
 * Return: r_write- actual number of bytes read and printe
 * 	0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t r_write;
	ssize_t r_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r_read = read(fd, buf, letters);
	r_write = write(STDOUT_FILENO, buf, r_read);

	free(buf);
	close(fd);
	return (r_write);
}

