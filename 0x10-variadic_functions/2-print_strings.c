#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings,
 * followed by a new line.
 *
 * @separator:  is the string to be printed between the strings
 * @n:  is the number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int x;
	char* c;

	va_start(str, n);

	for (x = 0; x < n; x++)
	{
		c = va_arg(str, char *);
		if (c == NULL)
		{
			c = "(nil)";
		}
		printf("%s", c);

		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
