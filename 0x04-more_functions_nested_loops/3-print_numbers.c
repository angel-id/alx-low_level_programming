#include "main.h"

/**
 * print_numbers - a function that prints numbers 0 to 9
 * followed by a new line
 * Return: nothing
 */

void print_numbers(void)
{
	int n;
	
	for(n = 0; n < 10; n++)
		_putchar(n + 48);
	_putchar('\n');
}
