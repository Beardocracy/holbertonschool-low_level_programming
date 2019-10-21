#include "holberton.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes it with a
  * specific char
  * @size: the size of the array
  * @c: the char that will be initialized into the array
  * Return: pointer to the array, or NULL if it fails (if size is 0).
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
