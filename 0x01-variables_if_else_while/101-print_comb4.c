#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  * Return:0
  */

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (a < 56 && b < 57 && c < 58)
	{
		if (a < b && b < c)
		{
			putchar(a);
			putchar(b);
			putchar(c);
		}
		if (!(a == 55 && b == 56 && c == 57))
		{
			putchar(',');
			putchar(' ');
		}
		c++;
		if (c == 58)
		{
			b++;
			c = b + 1;
		}
		if (b == 57)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
	putchar('\n');

	return (0);
}
