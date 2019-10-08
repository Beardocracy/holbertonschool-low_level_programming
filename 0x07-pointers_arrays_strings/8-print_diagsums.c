#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sume of the two diagonals of a square matrix
  * @a: pointer to first index of matrix
  * @size: size of the square matrix
  */

void print_diagsums(int *a, int size)
{
	int i, j, ltor, rtol;

	rtol = 0;
	ltor = 0;
	for (i = 0, j = size + 1; i < size; i++)
		ltor = ltor + a[i * j];
	for (i = 1, j = size - 1; i <= size; i++)
		rtol = rtol + a[i * j];
	printf("%d, %d\n", ltor, rtol);
}
