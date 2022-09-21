#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise 0
 * @c: char in letters
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}

