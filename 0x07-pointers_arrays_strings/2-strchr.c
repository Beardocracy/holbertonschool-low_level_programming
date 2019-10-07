#include "holberton.h"
/**
  * _strchr - returns a pointer to the first occurrence of char c in s.
  * @s: pointer to a string
  * @c: char to be located
  * Return: pointer pointed to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	for ( ; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
