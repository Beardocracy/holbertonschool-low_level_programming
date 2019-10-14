#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies 2 numbers and prints the result.
  * @argc: the number of arguments
  * @argv: array of strings
  * Return: 0 if successful, 1 if not
  */
int main(int argc, char *argv[])
{
	int prd;

	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	prd = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prd);
	return (0);
}
