#include "holberton.h"

/**
  * is_divisible - checks to see if a number is divisible by numbers 3 - num.
  * @i: pointer to integer for comparison
  * @p: pointer to integer for togling 1 or zero
  * @j: pointer to integer for incrementing
  * Return: 1 if indivisible, 0 if divisible.
  */
int is_divisible(int *i, int *p, int *j)
{

	if (*i % *j == 0)
		return (0);
	if (*i / 2 > *j)
	{
		*j += 1;
		*p *= is_divisible(i, p, j);
	}
	return (*p);
}

/**
  * is_prime_number - returns 1 if number is prime, 0 if not.
  * @n: integer
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	int *num;
	int *np;
	int *count;
	int j;
	int i = 1;
	int k = 3;

	j = n;
	num = &j;
	np = &i;
	count = &k;
	if (n < 2)
		return (0);
	else if (n % 2 == 0)
		return (0);
	return (is_divisible(num, np, count));
}
