#include "holberton.h"
/**
  * rot13 - this function encodes a string using rot13.
  * @s: pointer to a string
  * Return: pointer to a string
  */

char *rot13(char *s)
{
	int i, j;
	char chec[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chec[j] != '\0'; j++)
		{
			if (s[i] == chec[j])
			{
				s[i] = (s[i] + 13 - (26 * (j / 26)));
				j = 52;
			}
		}
	}
	return (s);
}
