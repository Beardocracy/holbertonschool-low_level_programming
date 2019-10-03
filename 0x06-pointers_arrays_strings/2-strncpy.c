#include "holberton.h"
/**
  * _strncpy - copies a string for its first n char, overwriting from start.
  * @dest: pointer to string
  * @src: source pointer to string
  * @n: number of char to be copied
  * Return: pointer to string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len, i, j;

	for (src_len = 0; *(src + src_len) != '\0'; src_len++)
		;
	if (n < src_len)
	{
		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	}
	else if (n >= src_len)
	{
		for (i = 0; i != src_len; i++)
			*(dest + i) = *(src + i);
		n -= src_len;
		for (j = 0; j < n; i++, j++)
			*(dest + i) = '\0';
	}
	return (dest);
}
