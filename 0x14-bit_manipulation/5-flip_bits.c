#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip for them to
 * be the same.
 * @n: The source number.
 * @m: the number we would change.
 * Return: the number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index, num_flips = 0;

	for (index = 0; index < (sizeof(unsigned long int) * 8); index++)
		if (((n >> index) & 1) != ((m >> index) & 1))
			num_flips++;
	return (num_flips);
}
