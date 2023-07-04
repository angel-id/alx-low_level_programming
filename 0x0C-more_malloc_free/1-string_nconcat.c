#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to join
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	len = strlen(s1) + n + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];
	for (b = 0; b < n; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';

	return (ptr);
}
