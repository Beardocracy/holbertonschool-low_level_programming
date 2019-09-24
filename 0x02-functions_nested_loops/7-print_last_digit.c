#include "holberton.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @c: accepts an int
  * Return: value of last digit
  */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	c = (c % 10);
	_putchar(c + '0');

	return (c);
}
