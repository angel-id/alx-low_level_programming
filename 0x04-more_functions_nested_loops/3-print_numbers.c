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
	while (n < 57)
	{
		n++;
		putchar(n);
	}
	putchar('\n');
}
