#include <stdio.h>
/**
 * main - a progam that prints
 * all possible combinations
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)

	{
		for (y = 1; y < 10; y++)
		{

			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x < 8 || y < 7)
				
				{
					putchar(3);
					putchar(-14);
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

