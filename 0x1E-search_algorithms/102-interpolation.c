#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: a pointer to the first position in the array
 * @size: size of the array
 * @value: the target value
 * Return: index where the value is found, or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] ", pos);
			printf("is out of range\n");
			return (-1);
		}
		printf("Value checked array[%lu] = %d\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos;
		else
			high = pos;

	}
	return (-1);
}
