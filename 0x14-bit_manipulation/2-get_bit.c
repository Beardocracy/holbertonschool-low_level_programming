#include "holberton.h"

/**
 * power_2l - returns 2 to the power of pow.
 * @pow: the exponent
 * Return: the result of the calculation.
 */
unsigned long int power_2l(unsigned long int pow)
{
	unsigned long int sum = 1;
	unsigned int i;

	while (i < pow)
	{
		sum *= 2;
		i++;
	}
	return (sum);
}

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to check
 * @index: the binary index to be checked
 * Return: 1 or 0, or -1 if index is bigger than possible with a ulint.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t unsigned_long_int_index_max;

	unsigned_long_int_index_max = (sizeof(unsigned long int) * 8);

	if (index >= unsigned_long_int_index_max)
		return (-1);

	if (n > power_2l(index))
	{
		n = n >> index;
		return (n & 1);
	}
	else
		return (0);
}
