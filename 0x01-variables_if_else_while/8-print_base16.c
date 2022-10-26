#include <stdio.h>
/**
 * main - a program that prints all the numbers
 * in base sixteen in lower case
 * Return: 0
 */

int main(void)
{
	int y;
	char x;	

	for (y = 48; y <= 57; y++)
	{
		putchar(y);
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
