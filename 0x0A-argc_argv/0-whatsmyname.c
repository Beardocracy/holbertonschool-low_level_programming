#include <stdio.h>

/**
  * main - prints it's own name, followed by a newline.
  * @argc: the number of elements in argv
  * @argv: an array of strings
  * Return: 0
  */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
