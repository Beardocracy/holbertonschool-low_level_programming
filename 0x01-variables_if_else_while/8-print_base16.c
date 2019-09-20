#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase 
 * Return:0
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
