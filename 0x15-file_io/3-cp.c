#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * write_error - prints an error message
 * @s: the name of the file
 */
void write_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * read_error - prints an error message
 * @s: name of the file
 */
void read_error(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * main - copies the contents of a file to another file.
 * @argc: the number of arguments.
 * @argv: an array of strings. The arguments.
 * Return: 0 if success.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, ret, close_to, close_from;
	ssize_t wc;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		read_error(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		write_error(argv[2]);
	do {
		ret = read(file_from, buffer, 1024);
		if (ret == -1)
			read_error(argv[1]);
		wc = write(file_to, buffer, ret);
		if (wc == -1)
			write_error(argv[1]);
	} while (ret == 1024);

	close_to = close(file_to);
	close_from = close(file_from);
	if (close_to + close_from != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n",
				close_to == 0 ? argv[1] : argv[2]);
		exit(100);
	}
	return (0);
}
