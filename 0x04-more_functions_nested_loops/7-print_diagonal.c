#include "holberton.h"
/**
  * print_diagonal - prints a diagonal line to the terminal
  * @n: integer
  */

void print_diagonal(int n)
{
	int i;
	int j = 0;

	while (j < n)
	{
		for (i = 0; i < j; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}

