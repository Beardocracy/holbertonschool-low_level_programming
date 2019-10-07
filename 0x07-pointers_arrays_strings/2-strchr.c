#include "holberton.h"
#include <stddef.h>
/**
  * _strchr - returns a pointer to the first occurrence of char c in s.
  * @s: pointer to a string
  * @c: char to be located
  * Return: pointer pointed to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	char *r;

	r = s;

	for ( ; *r != '\0'; r++)
	{
		if (*r == c)
			return (r);
	}
	return (NULL);
}
