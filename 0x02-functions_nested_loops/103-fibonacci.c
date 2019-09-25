#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the sum of even Fibonacci numbers less than 4m.
  * Return: 0
  */

int main(void)
{
	long int limit = 4000000;
	long int fib1 = 1;
	long int fib2 = 2;
	long int total = 2;
	long int future = 3;

	while (future < limit)
	{
		if ((future % 2) == 0)
		{
			total = total + future;
		}
		fib1 = fib2;
		fib2 = future;
		future = fib1 + fib2;
	}
	printf("%ld\n", total);
	return (0);
}
