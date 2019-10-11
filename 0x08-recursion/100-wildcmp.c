#include "holberton.h"
#include <stddef.h>

/**
  * matchmaker - this function checks 2 strings in a complex way
  * @s1: pointer to a string
  * @s2: pointer to a string
  * @s2copy: pointer to a string
  * Return: integer
  */
int matchmaker(char *s1, char *s2, char *s2copy)
{
	if (s2 == NULL)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
		return (matchmaker(s1, s2 + 1, s2 + 1));
	if (*s1 != *s2 && *s1)
	{
		if (s2copy == s2)
			return (matchmaker(s1 + 1, s2, s2copy));
		if (s2copy != s2)
			return (matchmaker(s1, s2copy, s2copy));
	}
	if (*s1 == *s2)
		return (matchmaker(s1 + 1, s2 + 1, s2copy));
	return (0);
}

/**
  * wildcmp - compares 2 strings
  * @s1: pointer to a string
  * @s2: pointer to a string
  * Return: 1 if identical, 0 if not
  */
int wildcmp(char *s1, char *s2)
{
	char *copy;

	copy = NULL;
	return (matchmaker(s1, s2, copy));
}
