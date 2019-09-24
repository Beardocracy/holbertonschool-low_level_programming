#include "holberton.h"
/**
  * _abs - Computes absolute value of a function
  * @c: receives a number
  * Return: an int
  */

int _abs(int c)
{
	if (c < 0)
		c = c * (-1);

	return (c);
}
