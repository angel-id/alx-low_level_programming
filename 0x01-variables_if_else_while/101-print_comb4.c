#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combination of three digits
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if (b > a && c > b)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != 7 || b != 8 || c != 9)
					{
						putchar(-4);
						putchar(-16);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
