#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by
 * a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to functions
 *
 * if seperator is NULL, don't print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x;

	va_start(nums, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(nums);
	printf("\n");

}
