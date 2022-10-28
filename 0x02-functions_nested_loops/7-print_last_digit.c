#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @y: input number as int
 * Return: last digit of function
 */

int print_last_digit(int y)
{
	int i;

	i = y % 10;

	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
