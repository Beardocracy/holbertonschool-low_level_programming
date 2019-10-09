#include "holberton.h"

/**
  * _pow_recursion - returns the value of x raised to the power of y.
  * @x: integer
  * @y: integer
  * Return: integer
  */
int _pow_recursion(int x, int y)
{
	int total;

	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y > 0)
		total = x * _pow_recursion(x, y - 1);
	if (y < 0)
		return (-1);
	return (total);
}
