#include "holberton.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string literal
  * @s2: second string literal
  * Return: pointer to concatenated string. Null if fails.
  */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len1, len2, i, j, count;

	count = 0;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	cat = malloc(sizeof(*cat) * (len1 + len2) + 1);
	if (cat == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++, count++)
			cat[count] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++, count++)
			cat[count] = s2[j];
	}
	cat[count] = '\0';
	return (cat);
}
