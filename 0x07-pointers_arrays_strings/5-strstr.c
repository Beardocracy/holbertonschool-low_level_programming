#include "holberton.h"
#include <stddef.h>
/**
  * _strstr - locates a substring in another string
  * @haystack: the string to be searched
  * @needle: the string we're searching for
  * Return: pointer to beginning of needle in haystack. Or null if not there.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
