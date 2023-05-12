#include "main.h"

/**
 * create_file -program  Creates a file.
 * @filename: Name of the file to create
 * @text_content:  write to the file.
 *
 * Return: If the function fails - -1.
 *         on success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r_write, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r_write = write(fd, text_content, lenght);

	if (fd == -1 || r_write == -1)
		return (-1);

	close(fd);

	return (1);
}
