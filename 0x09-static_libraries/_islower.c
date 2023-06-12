#include "main.h"

/**
 * _islower - a program that checks for lowercase character
 * @c: char type in ASCII code
 * Return: 1 if c is lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}

