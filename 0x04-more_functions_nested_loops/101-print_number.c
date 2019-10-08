#include "holberton.h"
#include <stdio.h>
/**
  * pow_ten - returns 10 to the power of an int
  * @p: integer
  * Return: an integer
  */
int pow_ten(int p)
{
	int t = 10;

	if (p == 0)
		return (1);
	while (p > 1)
	{
		t = t * 10;
		p--;
	}
	return (t);
}

/**
  * print_number - prints an integer
  * @n: signed int
  */
void print_number(int n)
{
	int i, t;
	int zero = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 0)
	{
		_putchar((((n / pow_ten(9)) % 10) * -1) + '0');
		n = (n % pow_ten(9)) * -1;
	}
	if (n / pow_ten(9) > 0)
	{
		_putchar((n / pow_ten(9)) + '0');
		n = n % pow_ten(9);
	}
	for (i = 10; (n / i) > 0; i *= 10)
		zero++;
	for ( ; zero >= 1; zero--)
	{
		t = (n / pow_ten(zero));
		_putchar((t % 10) + '0');
	}
	_putchar((n % 10) + '0');
}
