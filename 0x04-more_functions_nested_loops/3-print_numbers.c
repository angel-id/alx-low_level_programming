#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * Return: nothing
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 57; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
