#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - prints the last digit of a random number and gives if it is 0, >5
  * or <6 and not 0
  * Return: 0
  */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("The last digit of %d is %d and is ", n, last);
	if (last == 0)
	{
		printf("0\n");
	}
	else if (last > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
