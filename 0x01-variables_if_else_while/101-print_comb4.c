#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combination of three digits
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c < 57; c++)
			{
				if (b > a && c > b)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != 54 || b != 55 || c != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
