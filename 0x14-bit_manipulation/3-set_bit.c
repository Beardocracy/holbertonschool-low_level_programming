#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: pointer to the ul int to change
 * @index: the bit to set to 1.
 * Return: 1 if successful, -1 if index exceeds ulint max bits.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;
	size_t unsigned_long_int_index_max;

	unsigned_long_int_index_max = (sizeof(unsigned long int) * 8);
	if (index >= unsigned_long_int_index_max)
		return (-1);

	if (((*n >> index) & 1) == 0)
		*n = *n + (one << index);
	return (1);
}
