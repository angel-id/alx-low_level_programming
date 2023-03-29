#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers n to 98,
 * followed by a new line
 * @a: int type number
 */

void print_to_98(int a)
{
	while (a < 98)
	{
		printf("%d, ", a);
		a++;
	}
	while (a > 98)
	{
		printf("%d, ", a);
		a--;
	}

	printf("d\n", a);
}
