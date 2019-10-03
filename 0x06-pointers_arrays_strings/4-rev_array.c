#include "holberton.h"
/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer to integer array
  * @n: the number of integers in the array to be reversed
  */

void reverse_array(int *a, int n)
{
	int t, i;

	n = n - 1;
	i = 0;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
