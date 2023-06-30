#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the argument count
 * @i: integer that allows argument count
 *
 * Return 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);

	va_start (ap, n);

	int sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg (ap, int);
	va_end(ap);
	return(sum);
}
