#include "main.h"

/**
 * print_alphabet_x10 - a program that prints ten times
 * the alphabet in lowercase followed by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
