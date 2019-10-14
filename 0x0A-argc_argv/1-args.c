#include <stdio.h>

/**
  * main - this program prints the number of arguments passed into it.
  * @argc: the number of arguments
  * @argv: array of strings where arguments are stored
  * Return: 0
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
