#include "holberton.h"
/**
  * _strspn - Gets the length of a prefix substring
  * @s: pointer to a string
  * @accept: pointer to a string
  * Return: unsigned int
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i] && accept[j] != '\0'; j++)
			;
		if (accept[j] == s[i])
			count++;
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
