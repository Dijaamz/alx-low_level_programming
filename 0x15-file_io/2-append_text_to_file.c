#include "main.h"

/**
 * append_text_to_file - function Appends text at the end of a file
 * @filename: file.
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, r_write, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	r_write = write(o, text_content, lenght);

	if (o == -1 || r_write == -1)
		return (-1);

	close(o);

	return (1);
}
