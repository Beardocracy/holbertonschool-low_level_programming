#include "holberton.h"
/**
  * print_square - prints a square, followed by a new line
  * @size: integer, size of the square
  */

void print_square(int size)
{
	int i = 0;
	int j;

	do {
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	} while (i < size);
}
