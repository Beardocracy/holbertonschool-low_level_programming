#include "holberton.h"

/**
 * _strlen - finds the length of a string, not including \0.
 * @s: the string
 * Return: the length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int length, i;

	for (i = 0; s[i]; i++)
		length++;
	return (length);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: char string
 * @s2: char string
 * @n: the number of bytes of string 2 to concatenate.
 * Return: a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_length, s2_length, i, j;

	if (s1 == NULL)
		s1_length = 0;
	else
		s1_length = _strlen(s1);
	if (s2 == NULL)
		s2_length = 0;
	else
		s2_length = _strlen(s2);
	if (n > s2_length)
		n = s2_length;
	concat = malloc(s1_length + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
