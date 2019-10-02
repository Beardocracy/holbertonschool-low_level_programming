#include "holberton.h"
/**
  * _strcpy - copies the string pointed to by src, incl the null byte,
  * to the buffer pointed to by dest.
  * @dest: pointer to destination of copied string
  * @src: pointer to a string
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}