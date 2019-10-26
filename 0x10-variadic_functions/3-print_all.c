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
		while (!(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's' || format[i] == '\0'))
			i++;
		switch (format[i])
		{
		case 'c':
			_putchar(va_arg(ap, int));
			i++;
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			i++;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			i++;
			break;
		case 's':
			temp = va_arg(ap, char *);
			if (temp == NULL)
				temp = nil;	
			printf("%s", temp);
			i++;
			break;
		case '\0':
			printf("\n");
			return;
		}
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
