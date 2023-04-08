#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from,
 * 0 to 14, followed by a new line
 * Return: nothing
 */

void more_numbers(voidi)

{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar("%d", j);
		}
		_putchar("\n");
		i++;
	
	}

}
