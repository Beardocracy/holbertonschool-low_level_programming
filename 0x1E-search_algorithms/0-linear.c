#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using Linear
 * Search Algorithm
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: The value to search for
 * Return: the first index wehre the value is located, or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
