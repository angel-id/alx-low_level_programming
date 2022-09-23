#include "main.h"

/**
 * print_diagonal - a function that draws a 
 * diagonal line on the terminal
 * @n: number of times diagonal should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar ('\n');
	}else
	{
		int l, m;

		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == l)
				{
					_putchar('\\');
				}
				else if (m < l)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
		
