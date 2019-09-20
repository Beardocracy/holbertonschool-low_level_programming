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
		if (a == 49 && b == 48)
		{
			b = 50;
		}
		if (a == 50 && b == 48)
		{
			b = 51;
		}
		if (a == 51 && b == 48)
		{
			b = 52;
		}
		if (a == 52 && b == 48)
		{
			b = 53;
		}
		if (a == 53 && b == 48)
		{
			b = 54;
		}
		if (a == 54 && b == 48)
		{
			b = 55;
		}
		if (a == 55 && b == 48)
		{
			b = 56;
		}
		if (a == 56 && b == 48)
		{
			b = 57;
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
