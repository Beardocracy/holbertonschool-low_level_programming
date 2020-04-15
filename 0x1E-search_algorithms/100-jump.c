#include <stdlib.h>
#include <stdio.h>
#include <math.h>

size_t mmin(size_t a, size_t b);

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

	step = sqrt(size);
	jump = step;
	prev = 0;
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				step, array[step]);
		prev = step;
		step += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev,
				array[prev]);
		prev++;

		if (array[prev] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", prev,
					array[prev]);
			return (prev);
		}
		if (prev == mmin(step, size))
			return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}

/**
 * mmin - returns the lesser value of 2 ints
 * @a: first value
 * @b: second value
 * Return: the minimum value of the 2
 */
size_t mmin(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
