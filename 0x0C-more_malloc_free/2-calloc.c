#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory to arrays
 * @nmemb: the array members
 * @size: size of the array
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	else
	{

		i = 0;
		while (i < (nmemb * size))
		{
			*((char *)(ptr) + 1) = 0;
			i++;
		}
	}
	return (ptr);
	free(ptr);
}
