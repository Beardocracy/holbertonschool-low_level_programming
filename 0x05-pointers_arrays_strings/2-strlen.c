#include "holberton.h"
/**
  * _strlen - returns the length of a string
  * @s: pointer to a string
  * Return: length of string (int)
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
