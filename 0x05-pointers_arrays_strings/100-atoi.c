#include "holberton.h"
/**
  * _atoi - converts a string to an integer
  * @s: string
  * Return: integer
  */

int _atoi(char *s)
{
	int i, end;
	int sum = 0;
	int pos_neg = 1;

	for (end = 0; s[end] != '\0'; end++)
		;
	for (i = 0; i < end; i++)
	{
		if (s[i] == '-')
			pos_neg = -pos_neg;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			sum = s[i] - '0';
			while (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				if (sum > 0)
					sum = sum * 10 + s[i + 1] - '0';
				else if (sum == 0)
					sum = sum + s[i + 1] - '0';
				i++;
			}
			i = end;
		}
	}
	sum *= pos_neg;
	return (sum);
}

