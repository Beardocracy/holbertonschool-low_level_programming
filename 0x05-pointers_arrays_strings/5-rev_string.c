#include "holberton.h"
/**
  * rev_string - reverses a string
  * @s: string
  */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp[10];

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
	s[j] = '\0';
}
