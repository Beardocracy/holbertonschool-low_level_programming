#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers and prints the result
  * @argc: the number of arguments passed to the program
  * @argv: an array of strings containing what was passed
  * Return: 0 if successful, 1 if not
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	if (argc > 1)
		printf("%d\n", sum);
	return (0);
}
