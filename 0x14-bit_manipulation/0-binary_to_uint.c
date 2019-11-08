#include "holberton.h"

/**
 * power_2 - returns the value of 2 to the power of n.
 * @n: unsigned int.
 * Return: unsigned int.
 */
unsigned int power_2(unsigned int n)
{
	unsigned int result, i;

	if (n = 0)
		return (1);
	for (i = 0; i <= n; i++)
		result *= 2;
	return (result);
}

/**
 * reverse_str - reverses a string.
 * @s: the string to be reversed.
 * Return: pointer to reversed string.
 */
char *reverse_str(char *s)
{
	char temp;
	int i = 0, j = 0;

	while (s[i])
		i++;
	i--;
	for (; j <= i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
	return (s);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string
 * Return: the converted number, or 0 if invalid string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
			i++;
		else
			return (0);
	}
	reverse_str[b];
	for (i = 0; b[i] && i < 32; i++)
	{
		if (b[i] == '1')
			sum += power_2(i);
	}
	return (sum);
}

