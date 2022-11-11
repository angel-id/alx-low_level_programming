#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @n: the number of elements to copy
 * @src: the first pointer
 * @dest: the second pointer that holds the address of the first pointer
 *
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int memory = 0;

	while (memory < n)
	{
		dest[memory] = src[memory];
		memory++;
	}

	return (dest);
}
