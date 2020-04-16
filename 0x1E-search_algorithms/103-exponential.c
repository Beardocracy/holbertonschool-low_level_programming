#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the array where value is first found, or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = 1;
	while (right < size && array[right] <= value)
	{
		printf("Value check array[%lu] = [%d]\n",
				right, array[right]);
		left = right;
		right *= 2;
	}
	if (right >= size)
		right = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_recursive(array, left, mmin(right, size - 1), value));
}

/**
 * binary_recursive - searches for a value in a sorted array with BS
 * @array: pointer to the first element of the array
 * @l: the leftmost index
 * @r: the rightmost index
 * @value: The value to search for
 * Return: index where value is found, or -1
 */
int binary_recursive(int *array, size_t l, size_t r, int value)
{
	size_t mid;
	size_t l_temp = l;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		while (l_temp <= r)
		{
			printf("%d", array[l_temp]);
			l_temp++;
			if (l_temp <= r)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_recursive(array, l, mid - 1, value));
		return (binary_recursive(array, mid + 1, r, value));
	}
	return (-1);
}

/**
 * mmin - function that returns the minimum of 2 integers
 * @s: int that represents step value
 * @n: int that represents size of array
 * Return: minimum value as int
 */

size_t mmin(size_t s, size_t n)
{
	if (s < n)
		return (s);
	return (n);
}

