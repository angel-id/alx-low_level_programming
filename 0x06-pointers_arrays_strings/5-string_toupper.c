#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: to destination
 */

char *string_toupper(char *c)

{
	int d;

	for (d = 0; c[d] != '\0'; d++)
	{
		if (c[d] > 96 && c[d] < 123)
		{
			c[d] -= 32;
		}
	}
		return (c);
}
