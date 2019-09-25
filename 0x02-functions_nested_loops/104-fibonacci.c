#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the first 98 fibonacci numbers
  * Return: 0
  */

int main(void)
{
	int i;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int future;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", fib1);

		future = fib1 + fib2;
		fib1 = fib2;
		fib2 = future;

		if (i < 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
