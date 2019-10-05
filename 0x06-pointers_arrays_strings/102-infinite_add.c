#include "holberton.h"
/**
  * infinite_add - this function will add too char strings as if they are ints
  * @n1: First char * full of number characters
  * @n2: Second char *
  * @r: char * where the sum will be placed
  * @size_r: length of r
  * Return: 0 if r is too short, or r itself.
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, z, carry, size_tmp, sum;
	char *tmp;

	carry = 0;
	tmp[0] = 0;
	/* finds position before null of n1 and n2 */
	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	/* Positions i and j to smallest digit, sets length of next loop */
	i--;
	j--;
	size_tmp = i;
	if (j > i)
		size_tmp = j;
	/* Adds numbers and puts them in a string backwards */
	for (z = 0; z <= size_tmp; z++, i--, j--)
	{
		if (i > 0 && j > 0)
		{
			sum = n1[i] + n2[j] - '0' - '0' + carry;
			carry = sum / 10;
			sum = sum % 10;
			tmp[z] = sum;
		}
		else if (i > 0 && j < 0)
			tmp[z] = n1[i];
		else if (i < 0 && j > 0)
			tmp[z] = n2[j];
	}
	if (size_tmp > size_r)
		return (0);
	/* Reverses tmp string */
	for (k = 0; size_tmp >= 0; k++, size_tmp--)
		r[k] = tmp[size_tmp];
	r[k] = '\0';
	return (r);
}
