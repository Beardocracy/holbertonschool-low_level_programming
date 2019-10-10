#include "holberton.h"

/**
  * is_palindrome - returns 1 if a string is palindrome, 0 if not.
  * @s: Pointer to a string
  * Return: 1 or 0.
  */
int is_palindrome(char *s)
{
	char *end;

	end = s;
	if (*(s + 1) == '\0')
		return (1);
	end = end - 1 + final_char(s);
	return (test_tset(s, end));
}

/**
  * final_char - finds the final char of a string
  * @str: Pointer to a string
  * Return: length of string
  */
int final_char(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + final_char(str + 1));
}

/**
  * test_tset - tests a string to see if its a palindrome
  * @str: Pointer to a string
  * @fchar: final char of same string
  * Return: 1 if palindrome, 0 if not
  */
int test_tset(char *str, char *fchar)
{
	if (*str != *fchar)
		return (0);
	if (str >= fchar)
		return (1);
	return (test_tset(str + 1, fchar - 1));
}
