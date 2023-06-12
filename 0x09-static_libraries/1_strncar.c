#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destnation
 * @src: source string
 * @n: number of elements to concatenate in
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, b;

	for (i = 0; dest[i] != '\0'; i++)
		for (b = 0; src[b] != '\0' && n > 0; b++, n--, i++)
		{
			dest[i] = src[b];
		}
	return (dest);
}

