#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * main - adds positive numbers and prints the result
  * @argc: the number of arguments passed to the program
  * @argv: an array of strings containing what was passed
  * Return: 0 if successful, 1 if not
  */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i <= argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
