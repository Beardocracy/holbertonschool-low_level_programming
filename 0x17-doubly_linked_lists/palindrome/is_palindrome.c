#include "pals.h"
#include <stdio.h>

/**
 * is_palindrome - Checks to see if a number, n is a palindrome.
 * @n: the number to check for palindromness.
 * Return: 1 if is a palindrome, 0 if not.
 * Note - only works with 6 digit numbers.
 */
int is_palindrome(int n)
{
	int left, right;

	left = n - n % 1000;
	left = left / 1000;

	right = (n % 10) * 100;
	right += n % 100 - n % 10;
	right += (n % 1000) / 100;

	if (right == left)
		return (1);

	return (0);
}
