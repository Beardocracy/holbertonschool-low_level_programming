#include "holberton.h"
/**
  * puts_half - prints half of a string, followed by a newline.
  * @str: string
  */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;
	n = len / 2;
	if (len % 2 == 1)
		n++;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
