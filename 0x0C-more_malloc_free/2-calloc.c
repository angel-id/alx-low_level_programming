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
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + 1) = 0;
	}
	return (ptr);
	free(ptr);
}
