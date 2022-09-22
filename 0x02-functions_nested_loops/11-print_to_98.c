#include "main.h"

/**
 * print_to_98 -  a function that prints all natural numbers from n to 98, followed by a new line
 * @i: int type number
 */

int print_to_98(int i)
{
	if (i > 98)
	{
		for (; i > 98; i--)
		{
			printf("%d, ", i)
		}
	}
	else if(i < 98)
	{
		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i)
}
