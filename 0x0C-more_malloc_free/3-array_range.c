#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int range, x;
	int *ptr;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	x = 0;
	while (x < range)
	{
		*(ptr + x) = min + x;
		x++;
	}

	return (ptr);
	free(ptr);
}
