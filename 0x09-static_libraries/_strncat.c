#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to / destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a, c;

	for (a = 0; dest[a] != '\0'; a++)
		for (c = 0; src[c] != '\0'; c++)
		{
		dest[a] = src[c];
		a++;
		}
	dest[a] = '\0';
	return (dest);
}

