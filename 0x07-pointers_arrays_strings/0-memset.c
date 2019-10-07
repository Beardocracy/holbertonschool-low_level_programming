#include "holberton.h"
/**
  * _memset - fills memory with a constant byte
  * @s: pointer to a char array
  * @b: char to be entered in s
  * @n: int number of memory spaces to be filled.
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
		;
	if (n < j)
		n = j;
	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
