#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: const string, tells the format of subsequent arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int i = 0;
	char nil[] = "(nil)";

	va_start(ap, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			temp = va_arg(ap, char *);
			if (temp == NULL)
				temp = nil;
			printf("%s", temp);
			break;
		case '\0':
			printf("\n");
			return;

		}
		i++;
		while (!(format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's' || format[i] == '\0'))
			i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
