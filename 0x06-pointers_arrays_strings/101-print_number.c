#include "main.h"

/**
 * print_number - a functon that prints an integer
 * @n: input integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x, d, count;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	else
	{
		x = n;
	}
	d = x;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((x / count) % 10) + 48);
	}
}	

