#include <stdio.h>
/**
  * main - Prints all possible combos of two two-digit numbers
  * Return:0
  */

int main(void)
{
	int a = 1;
	int b = 0;

	while (b < 99)
	{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		putchar(' ');
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (b < 98)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
		if ((a % 100) == 0)
		{
			b++;
			a = b + 1;
		}
	}
	putchar('\n');

	return (0);
}
