#include "holberton.h"

/**
 * argstostr - concatenates the arguments into 1 string.
 * @ac: the number of arguments
 * @av: an array of strings.
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, z = 0;
	char *s;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	s = malloc(sizeof(char) * count);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
		{
			s[z] = av[i][j];
		}
		s[z] = '\n';
		z++;
	}
	return (s);
}
