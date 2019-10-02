#include "holberton.h"
/**
  * _atoi - converts a string to an integer
  * @s: string
  * Return: integer
  */

int _atoi(char *s)
{
	int i, end;
	int n, flag = 0;
	int pos_neg = 1;
	int INT_MAX = 2147483647;
	int INT_MIN = -2147483648;

	while (s[end] != '\0')
		end++;
	for (i = 0; i < end; i++)
	{
		if (flag == 0 && (s[i] == '-' || (s[i] >= '0' && s[i] <= '9')))
		{
			if (s[i] == '-')
				pos_neg *= -1;
			else
			{
				n += s[i] - 48;
				flag++;
			}
		}
		else if (flag == 1 && (s[i] >= '0' && s[i] <= '9'))
		{
			if (pos_neg == -1 && (s[i] - 48 > INT_MIN - n))
				return (INT_MIN);
			else if (pos_neg == 1 && (s[i] - 48 > INT_MAX - n))
				return (INT_MAX);
			else
				n = n * 10 + s[i] - '0';
		}
		else if (flag == 1 && (s[i] < '0' || s[i] > '9'))
			i = end;
	}
	n *= pos_neg;
	return (n);
}

