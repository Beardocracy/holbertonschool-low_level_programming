#include<stdio.h>
/**
  * main - prints the sizes of various variable types.
  * Return:0
  */

int main(void)
{
	char char_var;
	int int_var;
	long int long_var;
	long long int long_long_var;
	float float_var;

	printf("Size of a char: %ld byte(s)\n", sizeof(char_var));
	printf("Size of an int: %ld byte(s)\n", sizeof(int_var));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_var));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_var));
	printf("Size of a float: %ld byte(s)\n", sizeof(float_var));

	return (0);
}
