#include <stdio.h>
#include <stdlib.h>

/**
 * help - subtracts a number from the address of an int, and increments 2
 * others.
 * @num: the number we will subtract from
 * @coin_size: the number we will be subtracting
 * @flag: pointer to an int
 * @count: pointer to an int
 */
void help(int *num, int coin_size, int *flag, int *count)
{
	*num -= coin_size;
	*flag += 1;
	*count += 1;
}


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
			help(&n, 25, &flag, &count);
		if (n - 10 >= 0 && flag == 0)
			help(&n, 10, &flag, &count);
		if (n - 5 >= 0 && flag == 0)
			help(&n, 5, &flag, &count);
		if (n - 2 >= 0 && flag == 0)
			help(&n, 2, &flag, &count);
		if (n > 0 && flag == 0)
			help(&n, 1, &flag, &count);
	}
	printf("%d\n", count);
	return (0);
}
