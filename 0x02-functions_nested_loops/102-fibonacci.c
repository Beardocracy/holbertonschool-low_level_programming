#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the first 50 fibonacci numbers
  * Return: 0
  */

int main(void)
{
	int i;
	unsigned long long int fib1 = 1;
	unsigned long long int fib2 = 2;
	unsigned long long int future;

	for (i = 0; i < 50; i++)
	{
		printf("%llu", fib1);

		future = fib1 + fib2;
		fib1 = fib2;
		fib2 = future;

		if (i < 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
