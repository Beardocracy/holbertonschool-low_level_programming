#include "holberton.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string and returns a pointer to duplicate
  * @str: string to be copied
  * Return: pointer to duplicate string, or NULL if unsuccessful
  */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	arr = malloc(sizeof(*arr) * len + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	arr[i] = '\0';
	return (arr);
}
