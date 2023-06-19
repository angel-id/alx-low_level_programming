#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: array name
 * Return: pointer to an array or null if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch;

	if (size == 0)
	{
		return ('\0');
	}

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
		return (0);

	while (i < size)
	{
		*(ch + i) = c;
		i++;
	}

	*(ch + i) = '\0';

	return (ch);

}
