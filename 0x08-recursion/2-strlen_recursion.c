#include "holberton.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: pointer to a string
  * Return: int length of string
  */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
		n = n + 1 + _strlen_recursion(s + 1);
	else if (*s == '\0')
		return (0);
	return (n);
}
