#include "holberton.h"

/**
  * _sqrt_closest - find the whole number sqrt of a number
  * @x: Pointer to integer x
  * @y: Pointer to integer (possible root of x)
  * Return: int
  */
int _sqrt_closest(int *x, int *y)
{
	if (*x / *y != *y)
	{
		*y = *y + 1;
		_sqrt_closest(x, y);
	}
	return (*y);
}

/**
  * _sqrt_recursion - returns the natural sqrt of a number
  * @n: integer
  * Return: integer
  */
int _sqrt_recursion(int n)
{
	int root;
	int *i;
	int *j;
	int c = 2;

	j = &n;
	i = &c;
	if (n == 1)
		return (1);
	else if (n < 4)
		return (-1);
	root = _sqrt_closest(j, i);
	if (n % root > 0)
		return (-1);
	return (root);
}
