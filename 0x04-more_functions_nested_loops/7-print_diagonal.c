#include "main.h"

/**
 * print_diagonal - a function that draws a 
 * diagonal line on the terminal
 * @n: number of times diagonal should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int l, m;

	for (l = 0; l < n; l++)
	{
		for (m = 0; m < n; m++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (l < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}	
