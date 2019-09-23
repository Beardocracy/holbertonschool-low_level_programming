#include "holberton.h"

/**
  * print_alphabet - prints the alphabet
  */

void print_alphabet(void)
{
	char atoz[26]  = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(atoz[i]);

	_putchar('\n');
}
