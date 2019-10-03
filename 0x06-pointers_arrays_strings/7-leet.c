#include "holberton.h"
/**
  * leet - encodes a string into 1337
  * @str: pointer to a string
  * Return: pointer to a string
  */

char *leet(char *str)
{
	int i, j;
	char chec[] = "oOlL\0\0eEaA\0\0\0\0tTZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; chec[j] != 'Z'; j++)
		{
			if (chec[j] == str[i])
				str[i] = ((j / 2) + '0');
		}
	}
	return (str);
}
