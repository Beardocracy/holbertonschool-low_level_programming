#include "holberton.h"
/**
  * rev_string - reverses a string
  * @s: string
  */

void rev_string(char *s)
{
	int i, j = 0;
	char tmp[10000];

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[j] = tmp[i];
		i--;
		j++;
	}
}
