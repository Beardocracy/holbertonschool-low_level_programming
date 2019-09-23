#include "holberton.h"
/**
  * main - prints Holberton, followed by a new line
  * Return: 0
  */

int main(void)
{
	char name[9] = "Holberton";
	int a = 0;

	for (a = 0; a < 9; a++)
		_putchar(name[a]);
	_putchar('\n');

	return (0);
}
