#include "search_algos.h"

/**
 * advanced_binary - finds the index of a value in an array
 * @array: sorted integer array
 * @size: the size of the array
 * @value: the target
 * Return: the first index of the value, or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (adv_bin_recursive(array, 0, size - 1, value));
}

/**
 * adv_bin_recursive - searches for a value in a sorted array with BS
 * @array: pointer to the first element of the array
 * @l: the leftmost index
 * @r: the rightmost index
 * @value: The value to search for
 * Return: index where value is found, or -1
 */
int adv_bin_recursive(int *array, size_t l, size_t r, int value)
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
		if ((mid == 0 || array[mid - 1] < value) && array[mid] == value)
		{
			return (mid);
		}
		else if (mid == 0 && array[mid] != value)
			return (-1);
		else if (array[mid] > value)
			return (adv_bin_recursive(array, l, mid, value));
		else if (array[mid] < value)
			return (adv_bin_recursive(array, mid + 1, r, value));
		else if (mid != 0 && array[mid - 1] == value &&
				array[mid] == value)
			return (adv_bin_recursive(array, l, mid, value));
		else
			return (-1);
	}
	return (-1);
}
