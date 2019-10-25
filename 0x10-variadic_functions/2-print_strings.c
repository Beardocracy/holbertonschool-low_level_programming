#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings, followed by a newline.
 * @separator: the string to be printed between strings.
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *temp;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");
	}
	va_end(ap);
}
