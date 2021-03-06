#include "holberton.h"
/**
  * times_table - prints the 9 times table, starting with 0
  * Return: void
  */

void times_table(void)
{
	int m;
	int n;
	int mult;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			mult = (m * n);
			if (n == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (n == 9)
				_putchar('\n');
		}
	}
}
