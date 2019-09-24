#include "holberton.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @c: accepts an int
  * Return: value of last digit
  */

int print_last_digit(int c)
{
	c = (c % 10);
	if (c < 0)
	{
		c = (c * (-1));
	}
	_putchar('0' + c);

	return (c);
}
