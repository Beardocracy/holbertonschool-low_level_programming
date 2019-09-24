#include "holberton.h"
/**
  * jack_bauer - prints every minute of the day from 00:00 to 23:59
  * Return: void
  */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		m++;
		if (m == 60)
		{
			h++;
			m = 0;
		}
		_putchar('\n');
	}
}
