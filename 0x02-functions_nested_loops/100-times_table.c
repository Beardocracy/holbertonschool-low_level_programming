#include "holberton.h"
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: integer
  * Return: void
  */

void print_times_table(int n)
{
	int i, j, mult;

	if (n >= 0 && n <= 15)
		for (i = 0; i < (n + 1); i++)
			for (j = 0; j < (n + 1); j++)
			{
				mult = (i * j);
				if (j == 0)
					_putchar('0');
				else if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult >= 10 && mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (j == n)
					_putchar('\n');
			}
}
