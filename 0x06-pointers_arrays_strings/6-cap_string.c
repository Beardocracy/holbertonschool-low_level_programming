#include "holberton.h"
/**
  * cap_string - capitalizes all words of a string.
  * @s: pointer to a string
  * Return: pointer to a string
  */

char *cap_string(char *s)
{
	int i, j, next;
	char comp[] = "\n\t ,;.!?\"(){}";

	if (*s >= 97 && *s <= 122)
		*s -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		next = i + 1;
		for (j = 0; comp[j] != '\0'; j++)
		{
			if ((comp[j] == s[i]) && s[next] >= 97 && s[next] <= 122)
			{
				s[next] -= 32;
			}
		}
	}
	return (s);
}
