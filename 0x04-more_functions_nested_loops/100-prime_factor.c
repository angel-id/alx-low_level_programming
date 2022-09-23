#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: 0
 */

int main(void)
{
	long int x, fp;

	x = 612852475143;
	for (fp = 2; fp <= x; fp++)
	{
		if (x % fp == 0)
		{
			x /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
