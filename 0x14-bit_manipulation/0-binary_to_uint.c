#include "holberton.h"
#include <stdio.h>

/**
 * power_2 - returns the value of 2 to the power of n.
 *@n: unsigned int.
 * Return: unsigned int.
 */
unsigned int power_2(unsigned int n)
{
	unsigned int result = 1, i;

	if (n == 0)
		return (1);
	for (i = 0; i < n; i++)
		result *= 2;
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string
 * Return: the converted number, or 0 if invalid string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, j = 0, k;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
			i++;
		else
			return (0);
	}
	for (k = i, i--; j != k ; i--, j++)
	{
		if (b[i] == '1')
			sum += power_2(j);
	}
	return (sum);
}
