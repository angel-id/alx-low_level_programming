#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	n = 0;

	for (n < 10)
	{
		n++;
		_putchar(n + 48);
	}
	_putchar('\n');
}
