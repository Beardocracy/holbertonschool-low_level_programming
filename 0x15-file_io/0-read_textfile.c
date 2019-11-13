#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to std out.
 * @filename: the name of the file to print.
 * @letters: the number of letters it should read and print.
 * Return: the number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i;
	ssize_t count = 0, error_check = 0;
	char buffer[letters + 1];

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read(file, buffer, letters);
	buffer[letters] = '\0';
	for (i = 0; buffer[i] != '\0'; i++, error_check = 0)
	{
		error_check += write(STDOUT_FILENO, &buffer[i], 1);
		if (error_check == -1)
			return (0);
		count += error_check;
	}


	close(file);

	return (count);
}