#include "holberton.h"
/**
  * print_triangle - prints a triangle, followed by a newline
  * @size: integer, size of the triangle
  */

void print_triangle(int size)
{
	int spaces, hashes;
	int i, j;

	spaces = size - 1;
	hashes = size - spaces;

	while (spaces >= 0)
	{
		for (i = 0; i < spaces; i++)
			_putchar(' ');
		for (j = 0; j < hashes; j++)
			_putchar('#');
		_putchar('\n');
		spaces--;
		hashes++;
	}
}
