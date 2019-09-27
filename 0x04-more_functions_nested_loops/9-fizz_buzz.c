#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the numbers 1 to 100, replacing multiples of 3 with Fizz,
  * 5 with Buzz, and 3 and 5 with fizzbuzz.
  * Return: 0
  */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
