#include "holberton.h"
/**
  * cap_string - capitalizes all words of a string.
  * @s: pointer to a string
  * Return: pointer to a string
  */

char *cap_string(char *s)
{
	int i, j, prev;
	char comp[] = "\n\t ,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		for (j = 0; comp[j] != '\0'; j++)
		{
			if ((comp[j] == s[prev]) && s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
