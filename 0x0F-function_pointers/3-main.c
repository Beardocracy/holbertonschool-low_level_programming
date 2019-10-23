#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Calculates basic math from standard input in the format num1
  * operator num2.
  * @argc: the number of arguments entered
  * @argv: the array entered
  * Return: 98 if wrong number of arguments, 99 if bad operator, 100 if trying
  * to divide by 0.
  */
int main(int argc, char *argv[])
{
	int (*math)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (*(argv[3]) == 0 && (*(argv[2]) == '/' || *(argv[2]) == '%'))
	{
		printf("Error\n");
		exit (99);
	}
	math = get_op_func(argv[2]);
	if (math == NULL)
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", math(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
