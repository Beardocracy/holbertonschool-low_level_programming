#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to a string. Printed in between numbers.
 * @n: The number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		if (i == n - 1)
			printf("\n");
	}
	va_end(ap);
}
