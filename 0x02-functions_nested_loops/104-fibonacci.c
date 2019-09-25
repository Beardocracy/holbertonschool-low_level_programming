#include <stdlib.h>
#include <stdio.h>
/**
  * main - prints the first 98 fibonacci numbers
  * Return: 0
  */

int main(void)
{
	int i, j;
	unsigned long int fib1_t = 1;
	unsigned long int fib2_t = 2;
	unsigned long int fib1_h, fib2_h, fut_t, fut_h;
	unsigned long int bignumb = 1000000000000000000;

	for (i = 0; i < 90; i++)
	{
		printf("%lu, ", fib1_t);
		fut_t = fib1_t + fib2_t;
		fib1_t = fib2_t;
		fib2_t = fut_t;
	}
	fib1_h = fib1_t / bignumb;
	fib1_t = fib1_t % bignumb;
	fib2_h = fib2_t / bignumb;
	fib2_t = fib2_t % bignumb;
	fut_h = fut_t / bignumb;
	fut_t = fut_t % bignumb;
	for (j = 0; j < 8; j++)
	{
		printf("%lu%lu", fib1_h, fib1_t);
		fut_t = fib1_t + fib2_t;
		fut_h = fib1_h + fib2_h + (fut_t / bignumb);
		fut_t = fut_t % bignumb;
		fib1_t = fib2_t;
		fib1_h = fib2_h;
		fib2_t = fut_t;
		fib2_h = fut_h;
		if (j < 7)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
