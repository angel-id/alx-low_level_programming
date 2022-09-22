#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: int type number
 */

void print_times_table(int n)
{
	int a = 0, y, z;

	if (n > 15 || n < 0)
	return;
	while (a <= n)
	{
		for (y = 0; y <= n; y++)
		{
			z = a * y;
				if (z > 99)
				{
					_putchar(z / 100 + 48);
					_putchar((z / 10 % 10) + 48);
					_putchar(z % 10 + 48);
				}
				else if (z > 9)
				{
					_putchar(' ');
					_putchar(z / 10 + 48);
					_putchar(z % 10 + 48);
				}
				else if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + 48);
				}
				else
					_putchar(z + 48);
				if (y != n)
				{
					_putchar(44);
					_putchar(' ');
				}
		}
		_putchar('\n');
		a++;
	}
}
