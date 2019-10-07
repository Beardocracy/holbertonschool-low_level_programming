#include "holberton.h"
/**
  * _strchr - returns a pointer to the first occurrence of char c in s.
  * @s: pointer to a string
  * @c: char to be located
  * Return: pointer pointed to the first occurrence of c.
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (s + i);
}
