#include "holberton.h"
/**
  * _strcat - a function that concatenates two strings
  * @dest: pointer to be appended to
  * @src: pointer to be appended
  * Return: char pointer
  */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for ( ; *src != '\0'; i++, src++)
		*(dest + i) = *src;
	*(dest + i) = '\0';
	return (dest);
}
