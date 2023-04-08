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

	if (n > 0)
	
	for (l = 0; l < n; l++)
	{
		for (m = 0; m < l; m++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');

	}
	else 
		_putchar('\n');
}
