#include <stdio.h>
/**
  * main - prints all possible combinations of single-digit numbers
  * Return:0
  */

int main(void)
{
	int a = 48;
	int b = 48;

	while (a < 58 && b < 58)
	{
		putchar(a);
		putchar(b);
		if (!(a == 57 && b == 57))
		{
		putchar(',');
		putchar(' ');
		}
		b++;
		if (b == 58)
		{
			b = 48;
			a++;
		}
	}
	putchar('\n');

	return (0);
}
