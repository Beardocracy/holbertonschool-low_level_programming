#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to std out.
 * @filename: the name of the file to print.
 * @letters: the number of letters it should read and print.
 * Return: the number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t wc, rc;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rc = read(file, buffer, letters);
	if (rc == -1)
		return (0);
	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc == -1)
		return (0);

	close(file);
	free(buffer);

	return (wc);
}
