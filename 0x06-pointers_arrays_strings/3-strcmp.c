#include "holberton.h"
/**
  * _strcmp - compares to strings using ascii values
  * @s1: pointer to a string
  * @s2: pointer to a string
  * Return: integer
  */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n = 0;

	for (i = 0; (n == 0); i++)
	{
		n = *(s1 + i) - *(s2 + i);
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			return (0);
	}
	return (n);
}
