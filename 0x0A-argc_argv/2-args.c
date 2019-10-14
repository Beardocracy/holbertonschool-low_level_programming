#include <stdio.h>

/**
  * main - this program prints the all arguments passed into it.
  * @argc: the number of arguments
  * @argv: array of strings where arguments are stored
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
