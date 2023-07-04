#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: variable to be allocated memory
 *
 * Return: memory address
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
