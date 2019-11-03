#include "holberton.h"

/**
 * free_array - frees an array of strings
 * @arr: the array of strings
 * @y: the number of strings to be freed.
 */
void free_array(char **arr, int y)
{
	int i;

	if (y == 0)
		free(arr);
	if (y > 0)
	{
		for (i = 0; i < y; i++)
			free(arr[i]);
		free(arr);
	}
}
/**
 * strtow - splits a string into an array of strings, 1 for each word.
 * @str: the string to be split up
 * Return: a double pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, j, y, words = 0, count = 0;
	char **tab;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; )
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i])
			words++;
		while (str[i] != ' ' && str[i])
			i++;
	}
	tab = malloc(sizeof(char *) * words + 1);
	if (tab == NULL)
		return (NULL);
	tab[words] = NULL;
	for (i = 0, y = 0; str[i] != '\0' && y < words; y++, count = 0)
	{
		while (str[i] == ' ')
			i++;
		while (str[i] != ' ' && str[i])
		{
			count++;
			i++;
		}
		tab[y] = malloc(sizeof(char) * count + 1);
		if (tab[y] == NULL)
		{
			free_array(tab, y);
			return (NULL);
		}
		for (j = 0; j < count; j++)
			tab[y][j] = str[i - count + j];
		tab[y][j] = '\0';
	}
	return (tab);
}
