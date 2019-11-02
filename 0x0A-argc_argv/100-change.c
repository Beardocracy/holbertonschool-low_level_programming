#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum # of coins to make a number
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 * Return: 1 if wrong number of arguments, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int n, count = 0, flag = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}
	for ( ; n > 0; flag = 0)
	{
		if (n - 25 >= 0)
		{
			n -= 25;
			flag++;
		}
		if (n - 10 >= 0 && flag == 0)
		{
			n -= 10;
			flag++;
		}
		if (n - 5 >= 0 && flag == 0)
		{
			n -= 5;
			flag++;
		}
		if (n > 0 && flag == 0)
			n -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
