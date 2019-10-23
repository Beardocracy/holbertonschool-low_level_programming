#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - Searches an int array for a match.
  * @array: The int array to be searched.
  * @size: the size of the array
  * @cmp: pointer to function used for comparison
  * Return: The index of the match, or -1 if no match exists.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
