#include "holberton.h"

/**
  * factorial - returns the factorial of a given number
  * @n: integer
  * Return: integer
  */
int factorial(int n)
{
	int fact = 1;

	if (n == 1 || n == 0)
		return (1);
	if (n > 1)
		fact = n * factorial(n - 1);
	if (n < 0)
		return (-1);
	return (fact);
}
