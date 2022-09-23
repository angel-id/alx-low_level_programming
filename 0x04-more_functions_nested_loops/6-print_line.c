#include "main.h"

/**
 * print_line - prints straight line n times
 * @n: num of times straight line is printed
 * Return: no return.
 */

void print_line(int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
