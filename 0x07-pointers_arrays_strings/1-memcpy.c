#include "holberton.h"
/**
  * _memcpy - copies n bytes from memory area src to mem area dest
  * @dest: destination string
  * @src: source string
  * @n: unsigned int, number of bytes to be copied over
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (j = 0; dest[j]; j++)
		;
	if (n < j)
		n = j;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
