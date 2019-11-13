#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: string to add to the end of the file.
 * Return: 1 if successful, -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	write(fd, text_content, i);

	close(fd);

	return (1);
}
