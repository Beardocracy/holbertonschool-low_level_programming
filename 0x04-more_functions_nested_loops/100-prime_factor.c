#include <stdlib.h>
#include <stdio.h>
/**
  * main - finds and prints the largest prime factor of a large number
  * Return: 1 if factor exists, 0 if number is prime.
  */

int main(void)
{
	long int bignumb = 612852475143;
	long int i, j;

	for (i = 2; i < bignumb / 2; i++)
	{
		if (bignumb % i == 0)
		{
			bignumb /= i;
			i--;
		}
	}
	printf("%ld\n", bignumb);
	return (0);
}
