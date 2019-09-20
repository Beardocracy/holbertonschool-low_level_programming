#include <stdio.h>
/**
  * main - prints the alphabet without the q and e
  * Return:0
  */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
		if (a == 101 || a == 113)
		{
			a++;
		}
	}
	putchar ('\n');

	return (0);
}
