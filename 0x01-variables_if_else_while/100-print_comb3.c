#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  * Return:0
  */

int main(void)
{
	int a = 48;
	int b = 49;

	while (a < 57 && b < 58)
	{
		if (b == 48 && 48 < a && a < 58)
		{
			b = a + 1;
		}
		if (a != b)
		{
			putchar(a);
			putchar(b);
		}
		if (!(a == 56 && b == 57))
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
