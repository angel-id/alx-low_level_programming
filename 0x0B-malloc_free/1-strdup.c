#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that prints copy of a str.
 * @str: string to be copied
 * Return: Null if str = Null or pointer to
 * duplicate string.
 */

char *_strdup(char *str)
{
	char *dup;
	int size;
	int y;

	/* get size of *str */
	if (*str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	dup = (char *)malloc(sizeof(char) * size + 1);
	if (dup == NULL)
		return (NULL);

	/*copy the str into dup*/
	y = 0;
	while (y < size)
	{
		dup[y] = str[y];
		y++;
	}
	dup[y] = '\0';

	return (dup);


}

