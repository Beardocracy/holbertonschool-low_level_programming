#include "holberton.h"
/**
  * _islower - Tells if a character is upper or lower case
  * @c: The character to be checked
  * Return: 0 for upper case, 1 for lower case
  */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
