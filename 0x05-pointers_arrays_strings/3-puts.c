#include "main.h"

/**
 * _puts - prints a string to stdout and a new line
 * @str: char array string input
 * Return: 0
 */



void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)

	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
