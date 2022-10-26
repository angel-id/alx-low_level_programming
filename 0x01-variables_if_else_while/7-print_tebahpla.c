#include <stdio.h>

/**
 * main - a program that prints alphabets in
 * reverse
 *
 * return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
