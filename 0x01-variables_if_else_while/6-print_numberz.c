#include <stdio.h>

/**
 * main - a program that prints
 * all single digit number of base
 * ten starting from zero
 * Return: 0
 */

int main(void)
{
	int y;

	y = 48;
	while (y <= 57)
	{
		y++;
		putchar(y);
	}
	putchar('\n');
	return (0);
}
