#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches a sorted array using the Jump Search algo
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: First index wehre value is located, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, jump, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	step = 0;
	prev = 0;
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				step, array[step]);
		prev = step;
		step += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (prev < size && array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
