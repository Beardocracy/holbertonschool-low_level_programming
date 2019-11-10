#include "holberton.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements in the array.
 * @size: the size in bytes of each element.
 * Return: pointer to the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}
