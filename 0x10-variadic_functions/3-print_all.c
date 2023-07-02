#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int x;
	va_list all;
	char *s, *separator;

	va_start(all, format);

	separator = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}
	printf("\n");
	va_end(all);
}
