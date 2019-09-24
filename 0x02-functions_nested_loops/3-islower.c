#include "holberton.h"
/**
  * _islower - Tells if a character is upper or lower case
  * @c: The character to be checked
  * Return: 0 for upper case, 1 for lower case
  */

int _islower(int c)
{
	if (c >= 65 && c <= 91)
		return (0);
	else
		return (1);
}
