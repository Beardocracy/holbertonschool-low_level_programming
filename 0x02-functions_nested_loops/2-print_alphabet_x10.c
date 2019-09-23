#include "holberton.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
	char atoz[26]  = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(atoz[i]);

	_putchar('\n');
	}
}
