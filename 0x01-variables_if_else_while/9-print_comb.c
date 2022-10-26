#include <stdio.h>
/**
 * main - a program that prints
 * every single combination of
 * single digit numbers
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)

	{
		putchar(x);
		if (x < 56)
		{
			putchar(51);
			putchar(44);
		}

	}
	putchar('\n');
	return (0);
}
