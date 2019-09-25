#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the sum of all natural numbers below 1024 that are
  * divisible by 3 or 5
  * Return: 0
  */

int main(void)
{
	int i, j, sum;
	int n = 1024;

	for (i = 3; i < n; i += 3)
		sum = (sum + i);
	for (j = 5; j < n; j += 5)
	{
		if (!((j % 3) == 0))
		{
			sum = (sum + j);
		}
	}
	printf("%d\n", sum);
	return (0);
}
