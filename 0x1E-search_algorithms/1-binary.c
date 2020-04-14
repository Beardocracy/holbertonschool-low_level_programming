#include <stdlib.h>
#include <stdio.h>

int binary_recursive(int *array, size_t l, size_t r, int value);

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * Binary Search Algorithm
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: The value to search for
 * Return: the first index wehre the value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
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
